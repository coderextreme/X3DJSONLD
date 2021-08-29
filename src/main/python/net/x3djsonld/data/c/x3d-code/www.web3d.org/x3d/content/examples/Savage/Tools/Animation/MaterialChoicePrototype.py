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
    meta(content='MaterialChoicePrototype.x3d',name='title'),
    meta(content='Prototype definition for toggle-able Material node that can choose among an array of material nodes, and is switchable at run time. This prototype also demonstrates why it is important that only the first node in a ProtoBody can render: so that it can serve as a special node type (such as Material).',name='description'),
    meta(content='Don Brutzman and MV4205 class',name='creator'),
    meta(content='29 April 2004',name='created'),
    meta(content='14 January 2014',name='modified'),
    meta(content='MaterialChoiceExample.x3d',name='reference'),
    meta(content='https://savage.nps.edu/Savage/Tools/Animation/MaterialChoicePrototype.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    ProtoDeclare(appinfo='MaterialChoice selects one of several different Material values',name='MaterialChoice',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOnly',name='set_index',type='SFInt32'),
        field(accessType='initializeOnly',appinfo='which Material node is chosen, with array index starting at 0',name='index',type='SFInt32',value=0),
        field(accessType='outputOnly',name='index_changed',type='SFInt32'),
        field(accessType='inputOnly',name='set_fraction',type='SFFloat'),
        field(accessType='initializeOnly',appinfo='fraction to interpolate between current and next Material node (if any) across all field values.',name='fraction',type='SFFloat',value=0),
        field(accessType='inputOnly',appinfo='Trigger next Material node',name='next',type='SFBool'),
        field(accessType='inputOnly',appinfo='Trigger previous Material node',name='previous',type='SFBool'),
        field(accessType='initializeOnly',appinfo='array of available Material nodes defaults to zeroth Material',name='materials',type='MFNode',
          #  no default initialization node since it crashes Xj3D 
          ),
        field(accessType='inputOnly',appinfo='append another Material node to materials array',name='appendMaterial',type='SFNode'),
        field(accessType='inputOnly',appinfo='delete Material node indicated by input index value',name='deleteMaterial',type='SFInt32'),
        field(accessType='inputOnly',appinfo='deletes all Material nodes resets scene to default Material values defined in X3D Specification',name='deleteAllMaterials',type='SFBool')]),
      ProtoBody=ProtoBody(
        #  first node is node type for this prototype, other nodes are active but do not render 
        children=[
        Material(DEF='ViewedMaterialNode'),
        Script(DEF='MaterialAnimationScript',directOutput=True,
          field=[
          field(accessType='initializeOnly',name='traceEnabled',type='SFBool',value=False),
          field(accessType='inputOnly',name='set_index',type='SFInt32'),
          field(accessType='initializeOnly',name='index',type='SFInt32'),
          field(accessType='outputOnly',name='index_changed',type='SFInt32'),
          field(accessType='inputOnly',name='set_fraction',type='SFFloat'),
          field(accessType='initializeOnly',name='fraction',type='SFFloat'),
          field(accessType='inputOnly',name='next',type='SFBool'),
          field(accessType='inputOnly',name='previous',type='SFBool'),
          field(accessType='initializeOnly',name='viewedMaterial',type='SFNode',
            children=[
            Material(USE='ViewedMaterialNode')]),
          field(accessType='initializeOnly',name='defaultMaterial',type='SFNode',
            children=[
            Material(),]),
          field(accessType='initializeOnly',name='materials',type='MFNode'),
          field(accessType='inputOnly',appinfo='append another Material node to materials array',name='appendMaterial',type='SFNode'),
          field(accessType='inputOnly',appinfo='delete Material node indicated by input index value',name='deleteMaterial',type='SFInt32'),
          field(accessType='inputOnly',appinfo='deletes all Material nodes resets scene to default Material values defined in X3D Specification',name='deleteAllMaterials',type='SFBool'),
          field(accessType='initializeOnly',name='priorBadIndex',type='SFInt32',value=-1)],
          IS=IS(
            connect=[
            connect(nodeField='set_index',protoField='set_index'),
            connect(nodeField='index',protoField='index'),
            connect(nodeField='index_changed',protoField='index_changed'),
            connect(nodeField='set_fraction',protoField='set_fraction'),
            connect(nodeField='fraction',protoField='fraction'),
            connect(nodeField='next',protoField='next'),
            connect(nodeField='previous',protoField='previous'),
            connect(nodeField='materials',protoField='materials'),
            connect(nodeField='appendMaterial',protoField='appendMaterial'),
            connect(nodeField='deleteMaterial',protoField='deleteMaterial'),
            connect(nodeField='deleteAllMaterials',protoField='deleteAllMaterials')]))])),
    #  ==================== 
    Anchor(description='MaterialChoiceExample',url=["MaterialChoiceExample.x3d","https://savage.nps.edu/Savage/Tools/Animation/MaterialChoiceExample.x3d","MaterialChoiceExample.wrl","https://savage.nps.edu/Savage/Tools/Animation/MaterialChoiceExample.wrl"],
      children=[
      Shape(
        geometry=Text(string=["MaterialChoicePrototype","defines a prototype","","Click text to see example scene","MaterialChoiceExample"],
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

print ("python x3d.py load successful for MaterialChoicePrototype.py")
