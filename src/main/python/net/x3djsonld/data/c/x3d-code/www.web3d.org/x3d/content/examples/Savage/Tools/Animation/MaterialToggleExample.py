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
    meta(content='MaterialToggleExample.x3d',name='title'),
    meta(content='Example for toggle-able Material node that can switch between 2 sets of material values, selectable at run time.',name='description'),
    meta(content='Don Brutzman and MV4205 class',name='creator'),
    meta(content='2 May 2004',name='created'),
    meta(content='6 March 2010',name='modified'),
    meta(content='MaterialTogglePrototype.x3d',name='reference'),
    meta(content='https://savage.nps.edu/Savage/Tools/Animation/MaterialToggleExample.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    ExternProtoDeclare(appinfo='MaterialToggle selects one of two different Material values',name='MaterialToggle',url=["MaterialTogglePrototype.x3d#MaterialToggle","https://savage.nps.edu/Savage/Tools/Animation/MaterialTogglePrototype.x3d#MaterialToggle","MaterialTogglePrototype.wrl#MaterialToggle","https://savage.nps.edu/Savage/Tools/Animation/MaterialTogglePrototype.wrl#MaterialToggle"],
      field=[
      field(accessType='inputOnly',name='set_toggle',type='SFBool'),
      field(accessType='initializeOnly',appinfo='whether to use DefaultMaterial or ToggleMaterial',name='toggle',type='SFBool'),
      field(accessType='outputOnly',name='toggle_changed',type='SFBool'),
      field(accessType='initializeOnly',appinfo='Material node that is enabled when toggle=false',name='defaultMaterial',type='SFNode'),
      field(accessType='initializeOnly',appinfo='Material node that is enabled when toggle=true',name='toggleMaterial',type='SFNode'),
      field(accessType='inputOnly',appinfo='provide replacement default Material node',name='set_defaultMaterial',type='SFNode'),
      field(accessType='inputOnly',appinfo='provide replacement toggle Material node',name='set_toggleMaterial',type='SFNode')]),
    #  ==================== 
    Viewpoint(description='touch box to toggle material',orientation=(1,0,0,-0.79),position=(0,5,5)),
    Transform(rotation=(0,1,0,0.79),
      children=[
      Shape(
        geometry=Box(),
        appearance=Appearance(
          material=ProtoInstance(DEF='MT',name='MaterialToggle',
            fieldValue=[
            fieldValue(name='toggle',value=True),
            fieldValue(name='defaultMaterial',
              children=[
              Material(ambientIntensity=0.24,diffuseColor=(1,0.452381,0.40339),shininess=0.9,specularColor=(0.686486,0.396903,0.419275),
                #  Universal Media Library: ArtDeco 3 
                )]),
            fieldValue(name='toggleMaterial',
              children=[
              Material(ambientIntensity=0.24,diffuseColor=(0.330519,0.3389,0.6),shininess=0.78,specularColor=(0.290909,0.290909,0.290909),
                #  Universal Media Library: ArtDeco 8 
                )])]))),
      TouchSensor(DEF='TS',description='touch to toggle'),
      ROUTE(fromField='isActive',fromNode='TS',toField='set_toggle',toNode='MT')])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for MaterialToggleExample.py")
