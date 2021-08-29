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
    meta(content='SeaStarHighResolutionExample.x3d',name='title'),
    meta(content='Example instance of a SeaStar high-resolution prototype using default settings.',name='description'),
    meta(content='Charles Adams',name='creator'),
    meta(content='19 December 2002',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Copyright (c) c h a productions 2002',name='rights'),
    meta(content='http://X3dGraphics.com/examples/X3dForWebAuthors/KelpForestExhibit/SeaStarHighResolutionExample.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='SeaStarHighResolutionExample.x3d'),
    Viewpoint(description='Sea star, high resolution',orientation=(1,0,0,-1.57),position=(0,0.2,0)),
    #  note mismatch between filename SeaStarHighResolutionPrototype.x3d and prototype name SeaStar 
    ExternProtoDeclare(name='SeaStar',url=["SeaStarHighResolutionPrototype.x3d#SeaStar","http://X3dGraphics.com/examples/X3dForWebAuthors/KelpForestExhibit/SeaStarHighResolutionPrototype.x3d#SeaStar","http://X3dGraphics.com/examples/X3dForWebAuthors/KelpForestExhibit/SeaStarHighResolutionPrototype.wrl#SeaStar","SeaStarHighResolutionPrototype.wrl#SeaStar"],
      field=[
      field(accessType='inputOutput',name='scale',type='SFVec3f'),
      field(accessType='inputOutput',name='Appearance',type='SFNode')]),
    ProtoInstance(name='SeaStar',
      fieldValue=[
      fieldValue(name='Appearance',
        children=[
        Appearance(
          material=Material(diffuseColor=(1,0.490196,0.380392)))])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for SeaStarHighResolutionExample.py")
