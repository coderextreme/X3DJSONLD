###############################################
#
# Now available: developmental python x3d.py package on PyPi for import.
#   This approach greatly simplifies Python X3D deployment and use.
#   https://pypi.org/project/x3d
#
# Installation:
#       pip install x3d
# or
#       python -m pip install x3d
#
# Developer options for loading x3d package:
#
#    from x3d import *  # preferred approach, terser source that avoids x3d.* class prefixes
#
# or
#    import x3d         # traditional way to subclass x3d package, all classes require x3d.* prefix
#                       # but python source is very verbose, for example x3d.Material x3d.Shape etc.
#                       # X3dToPython.xslt stylesheet insertPackagePrefix=true supports this option.

from x3d import *

###############################################

newModel=X3D(profile='Immersive',version='3.3',
  head=head(
    children=[
    meta(name='title',content='rubikcoord.x3d'),
    meta(name='creator',content='John Carlson'),
    meta(name='generator',content='manual'),
    meta(name='identifier',content='https://coderextreme.net/X3DJSONLD/rubik.x3d'),
    meta(name='description',content='a kind of 2x2x2 rubik cube')]),
  Scene=Scene(
    children=[
    NavigationInfo(type='"EXAMINE"'),
    Viewpoint(description='Rubiks Cube',position=(0,0,12)),
    Background(skyColor=[(1,1,1)]),
    ProtoDeclare(name='boxproto',
      ProtoInterface=ProtoInterface(
        field=[
        field(name='xtranslation',accessType='inputOutput',type='SFVec3f',value=(0.0,0.0,0.0)),
        field(name='diffuseColor',accessType='inputOutput',type='SFColor',value=(1,1,1))]),
      ProtoBody=ProtoBody(
        children=[
        Transform(
          IS=IS(
            connect=[
            connect(nodeField='translation',protoField='xtranslation')]),
          children=[
          Shape(
            geometry=Box(),
            appearance=Appearance(
              material=Material(diffuseColor=(1,1,1),
                IS=IS(
                  connect=[
                  connect(nodeField='diffuseColor',protoField='diffuseColor')]))))])])),
    ProtoDeclare(name='two',
      ProtoInterface=ProtoInterface(
        field=[
        field(name='ytranslation',accessType='inputOutput',type='SFVec3f',value=(0.0,0.0,0.0)),
        field(name='diffuseColor',accessType='inputOutput',type='SFColor',value=(1,0,0))]),
      ProtoBody=ProtoBody(
        children=[
        Transform(
          IS=IS(
            connect=[
            connect(nodeField='translation',protoField='ytranslation')]),
          children=[
          ProtoInstance(name='boxproto',
            fieldValue=[
            fieldValue(name='xtranslation',value=(0,0,0)),
            fieldValue(name='diffuseColor',value=(1,0,0),
              children=[
              IS(
                connect=[
                connect(nodeField='diffuseColor',protoField='diffuseColor')])])]),
          ProtoInstance(name='boxproto',
            fieldValue=[
            fieldValue(name='xtranslation',value=(2,0,0)),
            fieldValue(name='diffuseColor',value=(1,0,0),
              children=[
              IS(
                connect=[
                connect(nodeField='diffuseColor',protoField='diffuseColor')])])])])])),
    ProtoDeclare(name='four',
      ProtoInterface=ProtoInterface(
        field=[
        field(name='ztranslation',accessType='inputOutput',type='SFVec3f',value=(0.0,0.0,0.0)),
        field(name='x1diffuseColor',accessType='inputOutput',type='SFColor',value=(1,0,0)),
        field(name='x2diffuseColor',accessType='inputOutput',type='SFColor',value=(0,1,0))]),
      ProtoBody=ProtoBody(
        children=[
        Transform(
          IS=IS(
            connect=[
            connect(nodeField='translation',protoField='ztranslation')]),
          children=[
          ProtoInstance(name='two',
            fieldValue=[
            fieldValue(name='ytranslation',value=(0,0,0)),
            fieldValue(name='diffuseColor',value=(1,0,0),
              children=[
              IS(
                connect=[
                connect(nodeField='diffuseColor',protoField='x1diffuseColor')])])]),
          ProtoInstance(name='two',
            fieldValue=[
            fieldValue(name='ytranslation',value=(0,2,0)),
            fieldValue(name='diffuseColor',value=(0,1,0),
              children=[
              IS(
                connect=[
                connect(nodeField='diffuseColor',protoField='x2diffuseColor')])])])])])),
    ProtoDeclare(name='eight',
      ProtoInterface=ProtoInterface(
        field=[
        field(name='ttranslation',accessType='inputOutput',type='SFVec3f',value=(0.0,0.0,0.0))]),
      ProtoBody=ProtoBody(
        children=[
        Transform(
          IS=IS(
            connect=[
            connect(nodeField='translation',protoField='ttranslation')]),
          children=[
          ProtoInstance(name='four',
            fieldValue=[
            fieldValue(name='ztranslation',value=(0,0,0)),
            fieldValue(name='x1diffuseColor',value=(1,0,0)),
            fieldValue(name='x2diffuseColor',value=(0,1,0))]),
          ProtoInstance(name='four',
            fieldValue=[
            fieldValue(name='ztranslation',value=(0,0,2)),
            fieldValue(name='x1diffuseColor',value=(0,0,1)),
            fieldValue(name='x2diffuseColor',value=(1,1,0))])])])),
    ProtoInstance(name='eight',
      fieldValue=[
      fieldValue(name='ttranslation',value=(0,0,0))])]
    #  Axes below
      <Group>
        <Group DEF='ArrowGreen'>
          <Shape>
            <Cylinder DEF='ArrowCylinder' radius='.025' top='false'/>
            <Appearance DEF='Green'>
              <Material diffuseColor='0 0 0'/>
            </Appearance>
          </Shape>
          <Transform translation='0 1 0'>
            <Shape>
              <Cone DEF='ArrowCone' bottomRadius='.05' height='.1'/>
              <Appearance USE='Green'/>
            </Shape>
          </Transform>
        </Group>
        <Transform translation='0 1.08 0'>
          <Billboard>
            <Shape>
              <Appearance DEF='LABEL_APPEARANCE'>
                <Material diffuseColor='0 0 0'/>
              </Appearance>
              <Text string='"Y"'>
                <FontStyle DEF='LABEL_FONT' family='"SANS"' justify='"MIDDLE" "MIDDLE"' size='.2'/>
              </Text>
            </Shape>
          </Billboard>
        </Transform>
      </Group>
      <Transform rotation='0 0 1 -1.57079'>
        <Group>
          <Group DEF='ArrowRed'>
            <Shape>
              <Cylinder USE='ArrowCylinder'/>
              <Appearance DEF='Red'>
                <Material diffuseColor='0 0 0'/>
              </Appearance>
            </Shape>
            <Transform translation='0 1 0'>
              <Shape>
                <Cone USE='ArrowCone'/>
                <Appearance USE='Red'/>
              </Shape>
            </Transform>
          </Group>
          <Transform rotation='0 0 1 1.57079' translation='.072 1.1 0'>
            <Billboard>
              <Shape>
                <Appearance USE='LABEL_APPEARANCE'/>
                <Text string='"X"'>
                  <FontStyle USE='LABEL_FONT'/>
                </Text>
              </Shape>
            </Billboard>
          </Transform>
        </Group>
      </Transform>
      <Transform rotation='1 0 0 1.57079'>
        <Group>
          <Group DEF='ArrowBlue'>
            <Shape>
              <Cylinder USE='ArrowCylinder'/>
              <Appearance DEF='Blue'>
                <Material diffuseColor='0 0 0'/>
              </Appearance>
            </Shape>
            <Transform translation='0 1 0'>
              <Shape>
                <Cone USE='ArrowCone'/>
                <Appearance USE='Blue'/>
              </Shape>
            </Transform>
          </Group>
          <Transform rotation='1 0 0 -1.57079' translation='0 1.1 .072'>
            <Billboard>
              <Shape>
                <Appearance USE='LABEL_APPEARANCE'/>
                <Text string='"Z"'>
                  <FontStyle USE='LABEL_FONT'/>
                </Text>
              </Shape>
            </Billboard>
          </Transform>
        </Group>
      </Transform>

    )
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
# print('check newModel.XML() serialization...')
newModelXML= newModel.XML() # test export method XML() for exceptions during export
newModel.XMLvalidate()

try:
#   print('check newModel.VRML() serialization...')
    newModelVRML=newModel.VRML() # test export method VRML() for exceptions during export
    # print(prependLineNumbers(newModelVRML)) # debug
    print("Python-to-VRML export of VRML output successful (still testing)")
except BaseException as err:
    print("*** Python-to-VRML export of VRML output failed:", err)
    if newModelVRML: # may have failed to generate
        print(prependLineNumbers(newModelVRML, err.lineno))

try:
#   print('check newModel.JSON() serialization...')
    newModelJSON=newModel.JSON() # test export method JSON() for exceptions during export
#   print(prependLineNumbers(newModelJSON)) # debug
    print("Python-to-JSON export of JSON output successful (still testing)")
except SyntaxError as err:
    print("*** Python-to-JSON export of JSON output failed:", err)
    if newModelJSON: # may have failed to generate
        print(prependLineNumbers(newModelJSON,err.lineno))

print("python x3d.py load and self-test complete for rubikcoord.py")
