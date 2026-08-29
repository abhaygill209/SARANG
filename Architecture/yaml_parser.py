from dataclasses import dataclass
import yaml

@dataclass
class ConfigSection:
    name: str

    @classmethod
    def from_dict(cls, name, values):
        section = cls(name=name)
        for key, value in values.items():
            setattr(section, key, resolve_value(value))
        return section

@dataclass
class DesignConfig:
    sections: dict

    @classmethod
    def from_dict(cls, config_data):
        sections = {}
        for section_name, values in config_data.items():
            if isinstance(values, dict):
                sections[section_name] = ConfigSection.from_dict(section_name, values)
            else:
                sections[section_name] = resolve_value(values)
        return cls(sections=sections)

def resolve_value(value):
    if isinstance(value, str):
        try:
            return eval(value, {"__builtins__": {}}, {})
        except Exception:
            return value
    return value

def print_section(section):
    print(f"{section.name}:")
    for key, value in vars(section).items():
        if key == "name":
            continue
        print(f"  {key} = {value}")