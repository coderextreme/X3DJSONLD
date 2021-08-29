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
        texture=ImageTexture(url=['../../images/4/Malacca2-3.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.1626108494143166,100.04106255949056,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[99,97,84,95,92,85,99,112,83,68,61,74,62,59,55,51,51,49,45,41,39,38,108,97,91,94,117,113,111,121,92,75,59,58,59,58,55,54,52,51,47,44,42,45,126,129,115,117,140,140,151,122,101,74,73,66,50,55,53,53,53,51,49,48,44,39,189,169,143,135,136,142,135,122,90,81,72,67,63,44,50,51,52,53,49,47,40,37,149,154,142,101,139,142,132,105,98,71,70,68,63,54,44,46,48,48,45,48,46,38,124,131,131,130,131,137,133,110,104,68,69,65,59,53,43,40,44,50,39,37,42,36,164,119,108,120,97,123,115,98,92,62,64,63,54,52,50,42,36,43,39,35,39,35,140,125,150,117,110,80,112,97,79,54,57,56,56,50,51,47,35,34,33,34,34,33,152,147,132,137,132,91,111,86,67,53,47,48,54,51,50,41,59,31,26,30,33,32,125,139,109,117,105,103,75,76,76,70,61,45,38,48,49,46,44,38,27,27,30,29,92,87,86,83,90,78,104,94,80,75,68,60,40,39,48,47,40,41,38,27,22,29,94,102,127,112,100,90,119,114,84,85,68,52,54,34,42,36,40,33,39,37,22,25,108,140,121,117,110,121,115,119,99,80,75,65,45,48,43,33,38,25,31,34,21,21,137,168,143,123,136,128,115,102,97,91,85,70,47,55,49,47,38,38,35,39,39,38,118,115,153,119,130,105,93,83,84,78,80,65,72,49,56,48,42,42,39,36,35,29,89,107,151,113,88,124,114,112,86,60,69,77,69,65,54,51,46,42,42,40,34,32,85,105,134,124,122,94,88,106,99,72,79,76,73,68,50,46,46,43,47,37,52,32,85,134,157,144,138,112,104,89,68,81,78,79,65,41,48,46,48,45,37,33,26,30,73,110,119,102,109,86,114,110,95,87,81,78,48,57,47,46,40,31,37,35,23,23,71,86,94,99,85,104,115,82,102,58,63,62,59,46,34,42,46,39,27,18,27,19,80,76,61,63,58,92,93,65,99,83,49,56,42,51,31,58,55,48,30,21,19,18,94,73,79,82,53,73,55,52,61,52,65,50,48,50,60,61,57,40,35,20,16,16,91,76,82,75,52,76,56,61,67,55,58,54,48,51,60,63,59,41,30,21,18,15],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(3.070985940057265,102.12856265864148,0),geoSystem=['GDC'])))])
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
