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
    meta(content='BackgroundColorsOnly.x3d',name='title'),
    meta(content='Added a Background node to the KelpForest world.',name='description'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='20 April 2009',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='X3D Background example',name='subject'),
    meta(content='http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter11LightingEnvironmentalEffects/BackgroundColorsOnly.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='BackgroundColorsOnly.x3d'),
    Background(DEF='SandyShallowBottom',groundAngle=[0.05,1.52,1.56,1.5707],groundColor=[(0.2,0.2,0),(0.3,0.3,0),(0.5,0.5,0.3),(0.1,0.3,0.4),(0,0.2,0.4)],skyAngle=[0.04,0.05,0.1,1.309,1.570],skyColor=[(0.8,0.8,0.2),(0.8,0.8,0.2),(0.1,0.1,0.6),(0.1,0.1,0.6),(0.1,0.25,0.8),(0.6,0.6,0.9)]),
    Viewpoint(description='Background colors view'),
    Shape(
      geometry=Text(string=["Background node using","sky and, ground colors"],
        fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],style_='BOLD')),
      appearance=Appearance(
        material=Material(diffuseColor=(1,1,1))))])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for BackgroundColorsOnly.py")
