from pprint import pprint
from xml.etree import ElementTree as ET
from collections import defaultdict

# code is from
# https://stackoverflow.com/questions/7684333/converting-xml-to-dictionary-using-elementtree
# licensed as Creative Commons with Attribution per stackoverflow license.

def etree_to_dict(t):
    d = {t.tag: {} if t.attrib else None}
    children = list(t)
    if children:
        dd = defaultdict(list)
        for dc in map(etree_to_dict, children):
            for k, v in dc.items():
                dd[k].append(v)
        d = {t.tag: {k: v[0] if len(v) == 1 else v
                     for k, v in dd.items()}}
    if t.attrib:
        d[t.tag].update(('@' + k, v)
                        for k, v in t.attrib.items())
    if t.text:
        text = t.text.strip()
        if children or t.attrib:
            if text:
              d[t.tag]['#text'] = text
        else:
            d[t.tag] = text
    return d

tree = ET.parse("../data/HelloWorld.x3d")
root = tree.getroot()
xmlstr = ET.tostring(root, encoding='utf8', method='xml')
e = ET.XML(xmlstr)
d = etree_to_dict(e)
print(d) # use pprint as alternative
