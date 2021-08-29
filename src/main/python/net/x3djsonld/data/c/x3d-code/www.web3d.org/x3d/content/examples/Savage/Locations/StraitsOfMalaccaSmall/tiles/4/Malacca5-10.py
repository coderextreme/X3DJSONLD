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
        texture=ImageTexture(url=['../../images/4/Malacca5-10.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(2.116798394735791,102.96356269830186,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[72,5,21,6,10,12,27,18,20,57,50,34,43,33,37,46,58,32,23,41,52,47,26,11,20,7,19,12,23,43,60,38,37,52,36,51,34,31,31,38,31,24,34,35,23,13,19,13,22,22,27,20,53,40,100,47,38,77,74,39,33,56,72,33,45,32,39,18,25,11,20,18,21,25,28,46,39,84,63,65,66,50,30,53,47,40,16,46,105,14,21,15,18,25,23,31,27,40,57,61,76,57,50,41,34,124,79,39,37,34,256,46,23,16,24,26,23,26,47,28,32,50,46,42,39,40,50,72,65,36,50,19,103,164,201,12,19,32,25,45,43,47,55,44,44,57,54,46,68,69,54,44,48,27,162,93,31,15,19,23,27,29,55,56,57,42,84,56,52,58,75,88,78,46,30,29,72,62,87,22,23,29,35,41,37,50,52,65,82,53,69,68,83,77,70,54,119,42,59,64,24,21,21,37,34,27,38,53,52,77,78,86,62,64,86,86,67,69,57,35,83,31,28,30,25,23,35,27,68,61,46,92,91,91,65,129,97,60,90,55,83,55,37,26,30,25,26,33,30,45,110,50,66,125,96,97,73,95,68,52,45,54,26,43,30,25,26,35,36,34,44,61,58,51,54,98,101,89,104,80,51,83,234,56,54,67,26,37,37,34,38,36,41,70,68,72,62,98,116,95,79,78,126,117,110,47,54,34,33,60,36,54,34,49,68,53,61,72,63,106,78,77,87,150,215,119,66,166,63,35,30,48,41,44,52,56,131,62,106,88,100,171,144,160,108,284,163,181,63,47,58,60,34,52,43,47,50,57,92,104,137,92,129,439,283,436,398,205,84,79,73,62,142,202,27,34,48,41,54,67,105,104,107,240,281,624,736,521,109,120,68,62,64,51,251,406,35,50,46,61,46,70,115,166,219,330,605,712,788,567,328,82,69,70,84,232,134,167,70,39,44,59,59,65,151,253,206,249,598,715,625,453,79,164,64,106,292,157,168,100,49,46,51,70,59,72,115,253,306,326,744,511,291,203,388,331,82,216,189,240,373,164,25,75,63,77,70,66,118,190,288,601,551,432,507,493,710,127,251,717,463,506,401,238,23,69,74,72,72,71,116,178,283,557,506,422,528,518,661,117,272,758,488,511,418,253],
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
