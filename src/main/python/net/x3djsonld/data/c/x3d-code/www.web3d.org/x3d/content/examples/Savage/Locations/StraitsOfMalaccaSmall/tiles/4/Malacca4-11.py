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
        texture=ImageTexture(url=['../../images/4/Malacca4-11.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.7987358796286328,103.38106271813204,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[51,53,38,90,32,50,51,30,38,20,26,47,66,21,16,35,34,22,15,71,64,27,61,59,70,48,57,57,27,31,27,38,48,42,33,30,35,21,28,20,37,92,69,47,45,44,39,50,43,27,35,30,45,41,35,40,47,53,58,39,23,60,40,106,38,50,61,42,39,40,57,51,53,32,58,61,26,59,24,50,68,25,33,20,72,63,82,126,53,59,58,62,42,49,61,56,42,48,34,52,53,43,44,66,54,18,59,64,60,263,58,67,46,63,52,75,53,43,45,62,54,43,55,38,59,69,31,28,25,25,32,54,52,60,68,86,65,81,73,70,62,76,35,32,58,47,62,49,27,110,55,152,46,198,65,76,79,80,66,92,80,79,118,60,47,44,54,59,63,38,34,246,37,142,183,211,88,83,58,111,83,126,76,107,66,70,55,54,72,58,64,66,54,68,61,220,106,31,63,105,93,115,86,73,94,98,75,86,118,66,94,89,70,61,76,68,86,178,51,70,60,58,63,81,97,73,124,75,62,114,163,102,106,141,61,63,77,54,104,382,69,191,70,55,64,62,72,67,103,77,75,131,313,237,399,180,69,68,76,65,126,161,425,114,80,60,50,63,73,103,107,104,175,480,262,122,251,145,73,153,60,81,170,192,208,238,80,59,46,53,81,119,80,307,504,446,227,79,71,57,63,61,60,315,306,173,68,74,71,57,45,50,61,65,95,116,153,531,433,98,115,163,71,77,62,339,317,101,54,50,164,89,59,68,102,92,95,238,113,203,321,188,284,184,105,95,69,106,186,52,71,47,88,38,53,67,114,100,108,83,123,392,714,405,302,164,163,180,54,221,108,53,36,34,108,43,76,91,89,91,77,92,254,635,668,486,414,117,81,124,63,75,69,71,34,63,41,57,115,107,62,96,85,56,110,348,285,233,115,193,69,116,83,199,120,81,64,58,40,78,72,116,67,146,68,48,190,612,224,111,93,142,66,193,75,91,83,71,46,49,57,75,177,57,64,62,43,54,188,380,589,243,73,68,68,48,96,296,193,237,45,45,50,38,43,45,38,57,49,152,59,217,257,330,134,69,61,193,85,147,336,56,37,60,47,40,42,46,39,68,58,171,66,191,211,305,141,74,67,177,86,140,331,49,48,61],
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
