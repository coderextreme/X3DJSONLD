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
        texture=ImageTexture(url=['../../images/4/Malacca2-6.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.1626108494143166,101.29356261898111,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[39,39,10,13,14,12,13,19,39,38,37,26,11,28,10,3,17,34,6,3,37,39,19,35,15,14,10,8,11,27,27,53,21,39,21,32,8,4,5,33,25,4,27,38,26,41,35,18,15,11,12,31,37,44,33,19,33,4,5,4,9,33,5,4,4,36,23,34,33,14,12,14,16,29,53,44,32,17,11,4,4,16,34,37,35,28,32,39,28,37,24,15,17,18,22,37,24,36,31,37,11,5,5,6,29,37,32,38,39,39,34,31,23,28,25,43,38,24,16,30,19,38,22,6,7,5,35,40,41,39,39,31,39,37,53,31,18,51,46,30,19,21,8,25,17,17,29,17,37,38,40,40,38,32,28,44,38,40,29,45,56,23,34,13,4,6,17,28,37,36,39,38,39,39,34,34,29,29,27,20,32,42,40,33,22,19,33,6,4,5,33,37,37,36,37,40,35,36,18,34,40,31,28,32,25,27,29,35,32,33,6,29,35,38,38,36,36,38,38,37,22,31,25,35,22,17,24,28,33,36,35,28,4,1,36,40,37,37,33,37,39,37,17,33,28,26,18,17,39,36,33,35,15,17,9,7,35,37,36,37,39,40,40,38,21,24,21,23,19,37,35,33,33,32,7,17,4,36,35,40,41,36,40,40,40,40,18,32,22,18,16,22,33,29,35,7,13,19,17,33,41,39,43,38,41,40,41,37,26,42,19,18,40,32,27,25,26,17,33,27,30,36,37,42,41,41,40,42,40,32,42,35,19,15,34,28,31,30,25,29,31,10,33,36,39,40,41,40,42,42,41,34,30,29,14,23,34,28,25,30,19,27,24,14,34,38,40,40,39,43,42,42,42,37,27,11,13,32,38,22,24,29,21,10,11,15,20,36,44,41,42,45,43,45,42,39,21,19,17,35,26,24,13,8,23,9,11,19,14,35,28,43,45,38,44,44,42,34,17,17,14,22,14,25,11,26,8,17,10,18,15,21,39,37,41,39,40,42,54,34,18,11,13,19,15,12,12,17,13,18,13,16,14,33,34,40,38,41,42,36,57,40,18,19,11,23,23,13,24,24,26,22,14,28,22,32,39,37,39,43,42,38,43,40,15,25,11,23,22,13,22,23,27,24,12,28,18,34,39,37,39,42,42,41,45,39],
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
