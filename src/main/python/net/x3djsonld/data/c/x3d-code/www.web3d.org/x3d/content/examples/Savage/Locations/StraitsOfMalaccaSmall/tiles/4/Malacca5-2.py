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
        texture=ImageTexture(url=['../../images/4/Malacca5-2.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(2.116798394735791,99.62356253966037,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[804,330,373,273,103,115,93,31,32,31,29,25,34,20,25,24,16,35,29,16,15,10,901,543,230,137,99,96,62,87,42,37,38,43,28,24,16,21,16,18,35,20,10,8,682,483,567,145,114,100,73,56,53,43,35,42,39,25,15,13,17,22,10,15,9,6,587,657,485,151,143,105,170,82,43,41,54,68,41,28,24,14,12,11,12,11,8,6,504,462,348,139,169,86,106,53,64,35,53,43,36,41,16,18,10,10,8,9,7,9,474,536,614,116,125,73,71,52,57,54,46,31,28,28,19,18,10,13,11,8,10,6,380,278,290,170,81,80,75,70,54,45,34,31,25,15,15,19,10,11,10,10,6,14,297,196,234,101,81,68,53,71,62,54,30,45,28,17,13,19,10,8,9,11,10,5,227,241,118,106,85,82,63,63,65,37,28,19,20,11,10,19,8,7,5,10,10,5,187,211,123,108,66,70,57,56,58,46,41,23,24,18,10,11,4,6,3,9,6,4,206,184,128,107,80,63,49,33,35,37,22,17,15,11,9,6,5,4,4,2,2,3,132,206,134,111,78,56,49,38,37,28,19,18,15,9,13,8,9,8,6,2,4,2,138,165,103,103,83,53,59,47,41,41,21,10,11,9,8,7,11,9,9,7,7,6,141,115,110,84,106,54,50,48,30,30,24,15,17,8,8,9,9,10,10,13,9,2,248,98,83,124,118,52,48,42,29,22,25,22,15,14,10,9,10,10,10,11,9,5,192,83,82,56,46,57,40,42,25,23,18,20,13,8,9,8,11,12,16,11,8,7,121,71,322,156,82,23,44,37,34,28,21,18,12,6,7,8,9,8,9,12,7,5,97,189,245,82,72,22,32,24,36,25,12,8,6,4,5,5,8,8,8,11,9,6,221,168,175,297,59,35,30,20,18,22,10,12,6,5,5,4,5,7,9,8,11,9,170,191,135,271,28,26,14,22,16,14,11,12,8,10,5,2,3,7,7,9,12,9,60,194,51,59,22,14,19,17,8,15,11,9,9,10,9,6,1,7,5,8,11,11,69,191,55,31,12,18,14,10,8,9,9,7,10,10,8,7,3,2,6,8,10,10,78,148,48,30,13,16,13,9,9,8,9,7,10,10,9,7,2,2,6,8,9,10],
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
