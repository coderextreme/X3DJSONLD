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

newModel=X3D(profile='Immersive',version='3.1',
  head=head(
    children=[
    component(name='Geospatial',level=1)]),
  Scene=Scene(
    children=[
    Shape(
      appearance=Appearance(
        material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
        texture=ImageTexture(url=['../../images/4/bosphorus6-12.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(40.95291395417769,29.327679094953055,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0035324567,zDimension=24,zSpacing=0.0023768744,height=[162,180,184,181,134,111,122,69,86,93,120,119,127,121,117,128,113,124,118,133,120,123,172,195,211,194,121,86,93,73,94,112,114,131,126,128,110,128,118,106,117,133,122,119,190,180,195,157,114,86,69,81,103,119,121,133,110,119,99,104,99,101,129,134,127,123,200,161,171,131,123,96,64,68,81,98,118,129,114,94,94,96,90,100,120,122,128,127,191,164,152,138,98,83,65,64,57,103,107,112,106,95,88,93,83,98,104,117,130,129,151,150,112,107,97,74,65,59,65,81,86,101,103,103,84,80,91,110,102,110,130,133,126,146,99,90,77,66,59,58,68,76,89,93,91,92,75,81,91,105,122,124,115,117,87,111,87,89,72,69,66,59,68,90,101,105,94,81,72,98,97,93,104,123,130,129,90,73,70,78,83,84,76,56,66,86,101,86,74,65,82,85,96,100,117,120,131,135,82,88,81,69,91,88,71,61,70,91,106,67,65,69,84,93,111,94,110,112,130,128,99,110,90,64,75,91,72,59,65,94,74,69,83,96,85,94,111,105,105,116,120,124,131,98,82,73,54,68,61,65,62,69,73,88,108,107,84,99,118,113,112,138,122,118,140,118,93,77,67,57,56,62,58,75,113,118,112,107,100,95,105,124,124,136,126,122,145,132,110,98,77,67,66,59,62,81,110,132,117,121,116,108,114,122,143,124,135,131,165,147,123,108,80,73,76,63,51,67,105,123,109,105,110,120,123,123,129,111,130,127,147,150,127,103,95,87,93,72,63,59,97,105,94,101,122,137,122,112,122,106,119,129,158,124,132,117,109,109,108,79,60,61,75,103,71,98,110,132,122,108,110,95,117,124,157,140,114,109,119,122,123,93,69,49,69,95,66,88,104,107,126,105,89,88,106,117,138,145,127,102,100,111,113,82,64,62,62,57,63,84,84,93,116,119,108,86,107,114,123,145,138,108,90,82,88,89,84,57,64,66,70,78,84,101,106,100,98,86,95,96,112,134,155,119,81,72,82,111,76,74,72,57,77,90,88,97,93,92,98,79,100,99,97,124,148,113,79,66,83,94,62,98,88,66,64,82,82,96,100,92,76,83,104,109,100,126,125,92,73,62,66,66,67,115,93,83,72,82,100,94,103,94,89,77,90,96,102,127,119,88,75,63,61,64,71,115,93,85,73,85,106,97,102,91,88,74,88,96],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.06225017873692,29.030952729968703,0),geoSystem=['GDC'])))])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful")
