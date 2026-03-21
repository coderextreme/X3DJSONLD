import xml.etree.ElementTree
import os
import re
# import glob

# get the animation from the input file name
def findAnimation(input_filename):
    input_filename = input_filename.replace('\\', '/')
    animation = re.sub(r".*/", "", input_filename).replace(".x3d", "")
    return animation

# get the animation from the input file name
def findFolder(input_filename):
    input_filename = input_filename.replace('\\', '/')
    folder = re.sub(r"/JohnCarlsonMenu.x3d", "", input_filename)
    folder = re.sub(r".*/", "", folder)
    return folder

def fixURL(url):
    url = url.replace('\\', '/')
    return url


def displayMenu(files, script_name, url):
    ifs_start = 1
    increment = -1/14
    menu_str = ""

    # First ill in the menu
    for fitem, input_file in enumerate(files):
        animation = findAnimation(input_file)
        folder = findFolder(input_file)
        if script_name == "FolderScript" and folder != "JohnCarlsonMenu":
            menu_str += '<ProtoInstance DEF="'+animation+'" name="MenuItem">\n'
            menu_str += '<fieldValue name="label" value=\'"'+folder+'"\'/>\n'
            menu_str += '<fieldValue name="description" value="'+folder+'"/>\n'
            menu_str += '<fieldValue name="translation" value="-2 '+str(ifs_start)+' 0.5"/>\n'
            menu_str += '<fieldValue name="url" value=\'"'+fixURL(url)+folder+"/"+animation+'.x3d" "'+folder+"/"+animation+'.x3d"\'/>\n'
            menu_str += '</ProtoInstance>\n'
            ifs_start += increment
        if script_name == "FileScript" and animation != "JohnCarlsonMenu":
            menu_str += '<ProtoInstance DEF="'+animation+'" name="MenuItem">\n'
            menu_str += '<fieldValue name="label" value=\'"'+animation+'"\'/>\n'
            menu_str += '<fieldValue name="description" value="'+animation+'"/>\n'
            menu_str += '<fieldValue name="translation" value="-1 '+str(ifs_start)+' 0.5"/>\n'
            menu_str += '<fieldValue name="url" value=\'"'+fixURL(url)+animation+'.x3d" "'+animation+'.x3d"\'/>\n'
            menu_str += '</ProtoInstance>\n'
            ifs_start += increment


    # Then fill in script an doutes
    menu_str += '<Script DEF="'+script_name+'">\n'

    for fitem, input_file in enumerate(files):
        animation = findAnimation(input_file)
        menu_str += '<field accessType="inputOnly" type="SFTime" name="touch_'+animation+'"/>\n'
        menu_str += '<field accessType="outputOnly" type="SFBool" name="load_'+animation+'"/>\n'

    menu_str += '<![CDATA[ecmascript:\n'
    menu_str += 'function selectOnly(chosen) {\n'

    for fitem, input_file in enumerate(files):
        animation = findAnimation(input_file)
        menu_str += 'load_'+animation+' = (chosen === \''+animation+'\');\n'

    menu_str += '}\n'

    for fitem, input_file in enumerate(files):
        animation = findAnimation(input_file)
        menu_str += 'function touch_'+animation+'(tm) { selectOnly("'+animation+'"); } \n'

    menu_str += ']]>\n'
    menu_str += '</Script>\n'
    for fitem, input_file in enumerate(files):
        animation = findAnimation(input_file)
        menu_str += '<ROUTE fromNode="'+animation+'" fromField="touchTime"   toNode="'+script_name+'" toField="touch_'+animation+'"/>\n'
        menu_str += '<ROUTE fromNode="'+script_name+'" fromField="load_'+animation+'"  toNode="'+animation+'" toField="load"/>\n'

    return menu_str

def walkX3d(dir, url, files, folders):
    if folders is None:
        files = sorted(set(files))
    else:
        files = sorted(set(folders + files))
    # produce final output
    finalX3D = xml.etree.ElementTree.Element('X3D')
    finalX3D.text = "\n"
    finalX3D.tail = "\n"
    finalX3D.set("profile", "Full")
    finalX3D.set("version", "4.1")
    head = xml.etree.ElementTree.Element('head')
    head.text = "\n"
    head.tail = "\n"

    component = xml.etree.ElementTree.Element('component')
    component.set("name", "Core")
    component.set("level", "1")
    component.text = ""
    component.tail = "\n"
    head.append(component)

    component = xml.etree.ElementTree.Element('component')
    component.set("name", "Grouping")
    component.set("level", "1")
    component.text = ""
    component.tail = "\n"
    head.append(component)

    component = xml.etree.ElementTree.Element('component')
    component.set("name", "Text")
    component.set("level", "1")
    component.text = ""
    component.tail = "\n"
    head.append(component)

    meta = xml.etree.ElementTree.Element('meta')
    meta.text = ""
    meta.tail = "\n"
    meta.set("name", "title")
    meta.set("content", "JohnCarlsonMenu.x3d")
    head.append(meta)

    meta = xml.etree.ElementTree.Element('meta')
    meta.text = ""
    meta.tail = "\n"
    meta.set("name", "identifier")
    meta.set("content", "https://coderextreme.net/X3DJSONLD/src/main/data/JohnCarlsonMenu.x3d")
    head.append(meta)

    meta = xml.etree.ElementTree.Element('meta')
    meta.text = ""
    meta.tail = "\n"
    meta.set("name", "description")
    meta.set("content", "Proto Menu Hierarchy")
    head.append(meta)

    meta = xml.etree.ElementTree.Element('meta')
    meta.text = ""
    meta.tail = "\n"
    meta.set("name", "created")
    meta.set("content", "20 March 2026")
    head.append(meta)

    meta = xml.etree.ElementTree.Element('meta')
    meta.text = ""
    meta.tail = "\n"
    meta.set("name", "modified")
    meta.set("content", "20 March 2026")
    head.append(meta)

    meta = xml.etree.ElementTree.Element('meta')
    meta.text = ""
    meta.tail = "\n"
    meta.set("name", "creator")
    meta.set("content", "John Carlson")
    head.append(meta)

    meta = xml.etree.ElementTree.Element('meta')
    meta.text = ""
    meta.tail = "\n"
    meta.set("name", "generator")
    meta.set("content", "CreateJohnCarlsonMenu.py")
    head.append(meta)

    finalX3D.append(head)

    scene = xml.etree.ElementTree.Element('Scene')
    scene.text = "\n"
    scene.tail = "\n"

    finalX3D.append(scene)

    header = '<?xml version="1.0" encoding="UTF-8"?>\n<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 4.1//EN" "https://www.web3d.org/specifications/x3d-4.1.dtd">\n'
    xmlstr = xml.etree.ElementTree.tostring(finalX3D, encoding='unicode')

    # produce menu
    menu_str = '''
        <WorldInfo title="JohnCarlsonMenu.x3d"/>
            <ProtoDeclare name="MenuItem">
            <ProtoInterface>
            <field name="translation" accessType="inputOutput" type="SFVec3f" value="-1.8 1 7.5"/>
            <field name="textTranslation" accessType="inputOutput" type="SFVec3f" value="0.05 -0.011 0"/>
            <field name="description" accessType="inputOutput" type="SFString"/>
            <field name="url" accessType="inputOutput" type="MFString"/>
            <field name="label" accessType="inputOutput" type="MFString"/>
            <field name="load" accessType="inputOutput" type="SFBool" value="false"/>
            <field name="size" accessType="initializeOnly" type="SFVec2f" value="1 0.1"/>
            <field name="fontSize" accessType="inputOutput" type="SFFloat" value="0.05"/>
            <field name="spacing" accessType="initializeOnly" type="SFFloat" value="0.6"/>
            <field accessType="outputOnly" type="SFTime" name="touchTime"/>
            </ProtoInterface>
            <ProtoBody>
            <Group>
              <!--
              <Anchor parameter='"target=_blank"'>
                <IS>
                  <connect nodeField="url" protoField="url"/>
                </IS>
              </Anchor>
              -->
              <Inline>
                <IS>
                  <connect nodeField="load" protoField="load"/>
                  <connect nodeField="url" protoField="url"/>
                </IS>
              </Inline>
              <TimeSensor DEF='MenuTimer' cycleInterval='75' loop='true' enabled='true'/>
              <PositionInterpolator DEF='MenuPos' key='0 0.5 1' keyValue='0 -0.25 0, 0 2.25 0, 0 -0.25 0'/>
              <ProximitySensor DEF='HudProx' size='5 5 5'/>
              <Transform DEF='HudXform'>
              <Transform DEF='MenuHolder' translation="-1 0 0">
                <ROUTE fromNode='MenuPos' fromField='value_changed' toNode='MenuHolder' toField='set_translation'/>
                <ROUTE fromNode='MenuTimer' fromField='fraction_changed' toNode='MenuPos' toField='set_fraction'/>
                <TouchSensor>
                  <IS>
                    <connect nodeField="description" protoField="description"/>
                    <connect nodeField="touchTime" protoField="touchTime"/>
                  </IS>
                </TouchSensor>
                <Transform>
                  <IS>
                    <connect nodeField="translation" protoField="translation"/>
                  </IS>
                  <Transform translation="0 0 0">
                    <IS>
                      <connect nodeField="translation" protoField="textTranslation"/>
                    </IS>
                    <Shape>
                      <Appearance>
                        <Material diffuseColor="1 1 1"/>
                      </Appearance>
                      <Text>
                        <IS>
                          <connect nodeField="string" protoField='label'/>
                        </IS>
                        <FontStyle justify='"MIDDLE" "MIDDLE"'>
                          <IS>
                            <connect nodeField="size" protoField="fontSize"/>
                            <connect nodeField="spacing" protoField="spacing"/>
                          </IS>
                        </FontStyle>
                      </Text>
                    </Shape>
                  </Transform>
                  <Transform translation="0 0.01 -0.01">
                    <Shape>
                      <Appearance>
                        <Material diffuseColor="0 0 1"/>
                      </Appearance>
                      <Rectangle2D size="1 0.1">
                        <IS>
                           <connect nodeField="size" protoField="size"/>
                        </IS>
                      </Rectangle2D>
                    </Shape>
                  </Transform>
                </Transform>
              </Transform>
              </Transform>
              <ROUTE fromField='position_changed' fromNode='HudProx' toField='set_translation' toNode='HudXform'/>
              <ROUTE fromField='orientation_changed' fromNode='HudProx' toField='set_rotation' toNode='HudXform'/>
            </Group>
          </ProtoBody>
          </ProtoDeclare>
          <ProximitySensor DEF="HudProx" size="50 50 50" />
    '''
    menu_str += displayMenu(folders, "FolderScript", url)
    menu_str += displayMenu(files, "FileScript", url)

    menu_str += '''
      </Scene>
    </X3D>
    '''

    xmlString = f"{header}{xmlstr[:-16]}{menu_str}"
    file_output = os.path.join(dir,os.path.basename("JohnCarlsonMenu.x3d"))
    print(file_output)
    with open(file_output, "w") as output_file:
        output_file.write(xmlString)

if __name__ == "__main__":
#    HOME = "C:/Users/jcarl/"
#    HTTPS = "https://"
#    BASE = "www.web3d.org/x3d/content/examples/"
    HOME = "C:/Users/jcarl/X3DJSONLD/"
    HTTPS = "https://localhost:3000/"
    BASE = "src/main/data/"
    PATH = HOME+BASE

    # Source - https://stackoverflow.com/a/9728478
    # Posted by dhobbs, modified by community. See post 'Timeline' for change history
    # Retrieved 2026-03-20, License - CC BY-SA 3.0

    # files = glob.glob(PATH+'*.x3d')
    for root, dirs, files in os.walk(PATH):
        url = root.replace(HOME, HTTPS)+"/"
        folders = ["{}/{}/{}".format(root, d, "JohnCarlsonMenu.x3d") for d in dirs]
        x3dfiles = ['{}'.format(f) for f in files if f.endswith(".x3d") and not "new" in f]
        walkX3d(root, url, x3dfiles, folders)
