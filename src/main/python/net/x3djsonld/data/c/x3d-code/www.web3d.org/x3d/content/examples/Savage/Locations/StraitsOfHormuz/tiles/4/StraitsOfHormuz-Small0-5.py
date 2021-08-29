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
        texture=ImageTexture(url=['../../images/4/StraitsOfHormuz-Small0-5.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(25.4489002189,55.87968120941913,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0071733817,zDimension=23,zSpacing=0.0050952244,height=[69,74,102,94,97,112,92,97,107,115,112,118,123,125,134,148,194,162,181,180,170,182,76,68,93,96,87,103,107,97,115,106,107,114,121,120,124,131,191,156,159,159,161,168,77,89,85,80,87,94,99,119,114,104,106,110,112,116,117,129,134,159,148,152,156,181,55,83,72,72,90,95,97,113,92,96,101,107,104,112,118,119,128,127,157,147,222,233,70,78,86,65,88,92,85,87,95,94,99,100,104,107,104,112,119,112,135,137,173,164,81,62,70,73,81,80,86,87,83,91,97,95,99,100,101,106,126,124,129,129,187,145,91,66,72,73,77,77,79,83,82,89,89,91,95,97,101,105,113,118,124,127,134,140,78,71,79,68,71,72,70,76,79,79,86,90,89,94,99,102,108,131,123,129,135,135,60,66,69,59,67,70,71,76,75,81,81,85,88,89,97,102,107,124,148,127,126,128,67,78,59,62,59,63,66,67,67,75,80,78,84,90,91,94,100,102,147,172,126,126,68,73,56,55,59,61,65,66,65,72,74,79,80,83,89,92,93,96,107,178,126,132,59,83,56,51,54,61,57,59,61,72,74,74,80,80,83,90,90,92,98,120,122,171,51,79,53,48,54,56,57,62,59,67,69,72,76,79,80,84,84,100,105,106,129,149,53,64,47,52,54,54,56,61,62,64,65,67,73,75,80,81,93,108,100,109,126,150,59,59,49,45,52,50,54,59,62,60,64,67,68,72,76,81,128,109,100,118,224,150,55,72,51,43,45,52,51,53,55,58,61,66,67,71,75,75,125,173,106,115,146,211,52,51,47,44,43,46,47,46,52,54,57,63,64,67,72,74,196,155,132,110,171,218,68,45,41,44,42,38,47,47,51,55,58,60,63,67,68,73,128,228,176,122,116,125,70,40,39,39,40,48,43,44,49,51,53,58,61,63,63,71,114,243,222,210,176,120,66,34,44,38,37,39,45,45,48,48,54,55,57,60,62,69,116,202,238,274,219,130,60,35,34,37,36,39,39,44,45,49,50,51,54,56,57,51,92,203,261,266,295,264,66,36,32,36,38,38,39,35,41,44,46,48,50,54,51,53,84,117,167,267,306,325,66,33,33,38,41,38,39,37,41,43,44,48,50,54,51,50,79,111,156,262,306,325],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(26.3456597347756,56.33160427093061,0),geoSystem=['GDC'])))])
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
