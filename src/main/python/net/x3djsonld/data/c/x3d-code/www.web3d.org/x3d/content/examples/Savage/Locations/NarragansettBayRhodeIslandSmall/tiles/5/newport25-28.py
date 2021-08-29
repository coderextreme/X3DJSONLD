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
        texture=ImageTexture(url=['../../images/5/newport25-28.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.63985995553778,-71.20887957792968,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[1,1,1,1,1,1,1,2,6,9,12,16,21,26,30,33,36,38,39,39,40,40,41,1,1,1,1,1,1,1,4,7,9,12,17,21,27,30,34,37,38,39,39,40,40,41,1,1,1,1,1,1,1,4,7,9,12,17,21,26,30,34,37,39,39,39,40,40,41,1,1,1,1,1,1,1,3,7,10,13,18,22,26,30,34,37,39,39,40,40,40,41,1,1,1,1,1,1,1,2,8,10,14,18,22,26,30,34,37,39,39,40,40,40,41,1,1,1,1,1,1,1,2,6,10,13,18,22,25,30,36,38,39,40,40,40,41,42,1,1,1,1,1,1,1,3,6,10,14,17,21,24,30,36,38,39,40,40,41,42,44,1,1,1,1,1,1,2,3,6,10,15,19,21,24,29,35,37,38,39,41,42,44,45,1,1,1,1,1,1,2,4,7,10,15,20,21,23,27,33,35,37,39,41,42,44,45,1,1,1,1,1,1,2,5,7,10,14,20,22,24,26,30,33,35,38,40,41,43,45,1,1,1,1,1,1,2,5,8,10,13,18,22,24,27,31,33,34,36,38,40,42,44,1,1,1,1,1,1,2,5,8,10,12,17,23,24,26,29,32,33,34,36,38,41,43,1,1,1,1,1,1,1,5,8,10,12,16,21,24,25,28,30,32,33,35,37,39,41,1,1,1,1,1,1,1,4,9,10,12,15,20,23,25,27,29,31,33,34,36,38,40,1,1,1,1,1,1,1,3,8,10,13,16,20,22,24,26,28,30,32,33,35,37,39,1,1,1,1,1,1,1,2,6,9,12,16,20,22,23,25,27,29,31,33,35,37,39,1,1,1,1,1,1,1,1,4,8,12,15,19,21,23,25,27,29,31,33,35,37,39,1,1,1,1,1,1,1,1,2,7,11,15,18,20,23,25,27,29,31,34,36,38,39,1,1,1,1,1,1,1,1,3,7,11,15,17,20,22,25,27,29,32,35,37,38,39,1,1,1,1,1,1,1,1,4,9,11,14,17,20,22,25,27,29,32,35,37,38,39,1,1,1,1,1,1,1,1,4,9,11,14,17,20,23,25,27,29,31,34,36,38,39,1,1,1,1,1,1,1,2,3,7,11,13,16,19,21,24,26,30,33,35,36,38,39,1,1,1,1,1,1,1,2,3,7,10,13,15,18,21,23,26,30,33,35,36,38,39],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC'])))])
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
