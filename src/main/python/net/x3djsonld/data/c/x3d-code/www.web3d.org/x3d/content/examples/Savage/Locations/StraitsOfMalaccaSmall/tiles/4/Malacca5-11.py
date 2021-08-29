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
        texture=ImageTexture(url=['../../images/4/Malacca5-11.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(2.116798394735791,103.38106271813204,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[47,40,42,46,39,68,58,171,66,191,211,305,141,74,67,177,86,140,331,49,48,61,35,74,46,43,39,47,26,57,44,154,81,223,98,57,59,175,81,70,111,97,71,54,32,34,36,44,48,45,24,29,43,77,76,56,45,56,101,98,61,90,82,46,64,58,46,93,52,63,147,54,160,46,31,172,39,40,37,78,71,100,88,65,101,244,81,49,34,29,53,108,248,153,34,67,31,71,38,41,33,60,41,100,68,61,348,125,43,104,19,38,65,165,77,161,231,30,69,24,56,41,37,60,101,80,65,70,104,56,40,47,27,46,109,93,52,33,25,36,21,24,27,39,38,70,64,91,75,45,71,41,50,75,29,111,37,25,35,23,20,49,33,30,20,51,54,63,229,149,64,44,55,51,68,81,42,22,30,20,19,14,14,28,35,31,25,27,45,139,166,76,62,65,26,40,44,68,35,21,18,20,24,17,15,11,13,30,21,15,59,59,267,50,44,49,59,44,40,51,55,29,35,30,23,22,21,12,16,20,24,9,34,86,162,93,56,57,50,41,38,49,43,37,60,37,26,31,24,23,11,17,18,8,25,67,63,177,37,26,50,47,34,85,67,46,34,28,29,51,50,23,21,7,16,8,43,50,75,297,27,58,17,32,33,76,34,30,24,37,43,48,35,56,31,34,14,25,11,48,66,62,40,47,45,56,68,51,35,36,35,25,50,48,49,46,42,31,9,22,9,49,51,52,37,30,42,37,80,62,60,88,28,25,29,32,51,42,31,23,17,15,7,53,53,45,37,40,34,36,54,49,202,85,77,36,34,16,34,35,23,30,31,23,20,61,37,37,31,39,43,31,56,30,406,131,67,45,42,58,22,19,27,26,28,16,25,50,23,22,21,15,16,14,20,17,167,280,203,103,46,28,23,25,25,21,24,33,13,21,26,24,39,21,32,19,18,16,100,91,93,53,47,96,34,34,32,22,23,23,28,39,11,16,84,18,29,33,22,11,164,172,201,156,49,36,37,30,27,19,18,17,26,34,12,40,46,15,20,21,9,14,238,204,138,84,72,34,26,24,25,25,33,25,22,24,10,18,52,15,21,21,20,17,253,187,162,98,59,34,27,25,26,24,35,26,24,25,10,14,44,15,11,14,19,33],
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
