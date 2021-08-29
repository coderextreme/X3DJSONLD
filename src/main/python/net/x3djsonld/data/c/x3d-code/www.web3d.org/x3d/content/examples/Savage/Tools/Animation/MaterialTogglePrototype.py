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

newModel=X3D(profile='Immersive',version='3.0',
  head=head(
    children=[
    meta(content='MaterialTogglePrototype.x3d',name='title'),
    meta(content='Prototype definition for toggle-able Material node that can switch between 2 sets of material values, selectable at run time. This prototype also demonstrates why it is important that only the first node in a ProtoBody can render: so that it can serve as a special node type (such as Material).',name='description'),
    meta(content='Don Brutzman and MV4205 class',name='creator'),
    meta(content='29 April 2004',name='created'),
    meta(content='14 January 2014',name='modified'),
    meta(content='MaterialToggleExample.x3d',name='reference'),
    meta(content='https://savage.nps.edu/Savage/Tools/Animation/MaterialTogglePrototype.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    ProtoDeclare(appinfo='MaterialToggle selects one of two different Material values',name='MaterialToggle',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOnly',name='set_toggle',type='SFBool'),
        field(accessType='initializeOnly',appinfo='whether to use DefaultMaterial or ToggleMaterial',name='toggle',type='SFBool',value=False),
        field(accessType='outputOnly',name='toggle_changed',type='SFBool'),
        field(accessType='initializeOnly',appinfo='Material node that is enabled when toggle=false',name='defaultMaterial',type='SFNode',
          #  no default initialization node since it crashes Xj3D 
          ),
        field(accessType='initializeOnly',appinfo='Material node that is enabled when toggle=true',name='toggleMaterial',type='SFNode',
          #  no default initialization node since it crashes Xj3D 
          ),
        field(accessType='inputOnly',appinfo='provide replacement default Material node',name='set_defaultMaterial',type='SFNode'),
        field(accessType='inputOnly',appinfo='provide replacement toggle Material node',name='set_toggleMaterial',type='SFNode')]),
      ProtoBody=ProtoBody(
        #  first node is node type for this prototype, other nodes are active but do not render 
        children=[
        Material(DEF='ViewedMaterialNode'),
        Script(DEF='MaterialAnimationScript',directOutput=True,
          field=[
          field(accessType='initializeOnly',name='traceEnabled',type='SFBool',value=False),
          field(accessType='inputOnly',name='set_toggle',type='SFBool'),
          field(accessType='initializeOnly',appinfo='whether to use DefaultMaterial or ToggleMaterial',name='toggle',type='SFBool'),
          field(accessType='outputOnly',name='toggle_changed',type='SFBool'),
          field(accessType='initializeOnly',name='defaultMaterial',type='SFNode'),
          field(accessType='initializeOnly',name='toggleMaterial',type='SFNode'),
          field(accessType='inputOnly',appinfo='provide replacement Material node',name='set_defaultMaterial',type='SFNode'),
          field(accessType='inputOnly',appinfo='provide replacement Material node',name='set_toggleMaterial',type='SFNode'),
          field(accessType='initializeOnly',name='viewedMaterial',type='SFNode',
            children=[
            Material(USE='ViewedMaterialNode')])],
          IS=IS(
            connect=[
            connect(nodeField='set_toggle',protoField='set_toggle'),
            connect(nodeField='toggle',protoField='toggle'),
            connect(nodeField='toggle_changed',protoField='toggle_changed'),
            connect(nodeField='defaultMaterial',protoField='defaultMaterial'),
            connect(nodeField='toggleMaterial',protoField='toggleMaterial'),
            connect(nodeField='set_defaultMaterial',protoField='set_defaultMaterial'),
            connect(nodeField='set_toggleMaterial',protoField='set_toggleMaterial')]))])),
    #  ==================== 
    Anchor(description='MaterialToggleExample',parameter=["target=_blank"],url=["MaterialToggleExample.x3d","https://savage.nps.edu/Savage/Tools/Animation/MaterialToggleExample.x3d","MaterialToggleExample.wrl","https://savage.nps.edu/Savage/Tools/Animation/MaterialToggleExample.wrl"],
      children=[
      Shape(
        geometry=Text(string=["MaterialTogglePrototype","defines a prototype","","Click text to see example scene","MaterialToggleExample"],
          fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],size=0.9)),
        appearance=Appearance(
          material=Material(diffuseColor=(1,1,0.2))))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for MaterialTogglePrototype.py")
