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
        texture=ImageTexture(url=['../../images/4/Malacca2-12.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.1626108494143166,103.79856273796223,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[3,5,7,10,5,-4,3,10,4,12,10,37,8,8,6,22,44,22,5,13,4,10,7,6,5,7,2,4,11,1,8,1,0,4,9,5,0,13,46,24,13,12,8,15,4,1,6,7,6,5,8,9,7,8,9,2,3,13,2,20,30,12,1,13,11,6,5,1,6,7,13,7,1,5,8,30,13,10,6,4,11,0,6,-1,11,11,1,6,2,-2,6,25,8,4,8,9,7,3,7,6,8,1,4,4,16,17,11,12,13,16,0,0,1,-3,-1,5,2,5,3,9,8,8,2,4,14,11,10,16,0,9,16,9,9,2,24,4,26,11,8,4,7,8,10,0,4,-1,-3,3,14,8,3,9,12,5,18,5,6,6,14,-14,13,5,7,10,5,9,8,9,-2,0,15,3,3,4,7,9,13,57,23,17,1,7,1,13,6,9,12,15,9,-16,-19,16,9,-11,4,5,13,9,35,17,20,54,13,11,5,9,2,12,8,8,30,4,11,0,0,10,5,13,16,8,16,30,34,13,12,11,7,10,12,8,4,8,6,1,4,1,8,6,3,0,-1,6,29,16,11,29,11,16,11,23,21,4,7,7,4,24,0,0,6,6,6,0,4,11,25,27,21,28,24,14,33,15,17,12,6,5,5,8,6,8,4,4,3,8,8,9,53,38,35,20,15,18,14,17,19,28,6,9,4,3,-5,3,12,8,22,11,9,3,57,48,19,29,11,12,14,18,15,24,6,8,2,5,-5,5,5,12,24,29,7,19,43,35,33,16,23,17,12,15,11,6,14,18,-1,0,-2,-1,20,11,3,6,17,14,42,29,24,17,21,3,32,15,0,1,-1,0,0,7,-1,-8,-5,9,4,6,22,48,53,42,12,13,12,9,26,12,14,5,11,1,13,11,7,0,2,8,9,9,7,28,26,31,17,18,9,65,23,7,19,16,1,4,0,-2,28,-3,5,36,11,25,32,29,31,24,15,6,-1,5,6,10,13,9,12,5,0,10,8,2,13,14,12,7,12,29,5,15,25,6,12,22,31,24,10,27,22,15,-2,8,7,13,26,46,3,33,31,47,11,-38,-9,7,22,16,46,38,17,34,31,16,-7,0,6,10,25,31,8,20,55,42,11,-43,-8,7,27,17,45,41,19,38,33,13,-7,0,5,11,29,29,8,29,55,40],
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
