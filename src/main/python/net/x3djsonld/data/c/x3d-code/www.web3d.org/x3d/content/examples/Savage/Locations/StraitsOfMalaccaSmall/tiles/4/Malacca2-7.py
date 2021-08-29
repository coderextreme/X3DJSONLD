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
        texture=ImageTexture(url=['../../images/4/Malacca2-7.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.1626108494143166,101.7110626388113,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[39,38,38,38,39,37,35,38,42,41,35,32,31,31,25,23,6,3,1,8,1,3,38,38,41,35,32,29,31,34,38,35,43,42,36,38,27,33,24,18,9,7,2,13,36,39,39,32,30,30,29,34,39,38,37,37,39,34,24,23,36,28,1,2,7,12,39,40,35,31,29,30,30,32,40,38,37,39,38,32,37,39,37,12,26,2,16,2,39,35,31,32,31,33,34,33,36,35,36,36,36,34,33,36,37,29,19,0,1,4,31,30,31,37,38,37,37,37,38,36,36,35,37,36,36,36,31,29,11,4,2,2,32,32,35,39,38,39,37,38,37,36,38,36,38,36,37,37,28,28,1,0,4,12,34,38,38,38,38,39,38,37,39,38,37,35,38,35,37,37,29,26,2,13,11,5,36,40,37,35,36,36,37,37,36,35,36,36,35,29,35,36,34,27,15,12,10,14,37,40,36,34,33,36,36,37,35,37,36,34,31,27,30,35,34,28,24,25,17,7,37,39,38,38,31,31,33,34,34,37,34,35,25,32,34,36,31,33,24,26,25,28,38,39,36,36,30,29,30,32,34,36,32,31,30,31,38,31,33,33,31,33,15,15,40,35,35,33,31,30,32,34,34,35,31,33,30,30,33,36,33,32,34,22,31,11,37,34,34,33,32,25,0,30,35,36,30,18,12,4,6,19,32,37,38,33,30,10,32,34,32,28,34,31,1,32,31,31,31,27,19,7,6,31,34,37,37,32,12,10,34,34,35,35,35,33,29,29,30,30,29,31,7,10,32,33,37,36,34,10,14,6,37,34,33,36,36,36,30,33,30,26,24,25,22,14,31,32,36,28,20,8,2,3,39,36,37,35,36,33,29,35,30,28,25,23,26,7,33,34,28,20,2,5,0,10,34,29,32,35,31,31,25,33,30,33,28,17,22,3,30,22,18,9,1,6,0,4,34,29,32,37,38,29,30,28,28,35,32,26,21,3,17,16,3,7,3,3,4,4,40,39,41,41,39,27,21,8,16,33,26,28,15,2,7,5,4,4,0,3,3,1,40,41,40,40,38,32,18,7,8,23,28,19,7,3,3,4,5,1,3,4,3,3,39,40,40,39,38,34,11,9,8,22,25,20,8,3,3,2,4,4,0,2,3,4],
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
