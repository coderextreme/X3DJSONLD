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
        texture=ImageTexture(url=['../../images/5/newport10-1.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.35539950857997,-71.7692354927566,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[25,23,22,20,19,21,18,16,15,14,14,14,14,17,19,23,26,33,33,33,40,41,25,24,26,26,19,19,19,18,17,15,15,14,14,16,17,18,20,24,27,31,38,39,24,23,23,21,19,22,23,23,16,15,15,14,16,17,17,19,21,24,25,29,33,34,16,16,16,15,15,17,18,17,15,16,15,15,16,17,21,22,24,26,25,27,31,32,13,13,12,13,13,13,13,12,13,14,13,13,14,16,22,25,27,27,30,34,36,36,12,12,12,12,12,12,12,12,12,13,13,13,13,15,19,23,28,30,35,40,39,39,12,12,12,12,12,13,13,13,13,12,11,11,12,14,18,21,27,33,39,41,40,40,12,13,13,13,13,14,16,15,14,13,12,11,11,13,15,23,34,38,40,41,43,44,12,13,13,14,13,17,21,21,22,19,17,15,14,14,14,23,33,38,36,38,43,44,15,16,16,15,14,15,21,26,32,30,29,24,19,18,20,22,24,29,30,30,31,31,18,18,16,13,12,13,19,27,34,38,38,36,28,28,32,33,30,29,31,31,31,31,19,22,16,14,13,13,16,24,34,39,39,37,31,31,35,36,38,37,37,35,36,36,21,24,17,15,15,14,13,19,25,31,31,27,24,24,27,28,34,37,40,43,44,45,22,22,16,15,15,16,15,14,17,20,21,20,19,21,26,30,35,39,43,50,52,51,21,18,15,17,18,17,15,13,14,17,16,19,22,26,30,36,42,47,50,52,55,55,17,16,16,17,17,18,17,16,15,16,18,22,26,32,33,40,47,52,52,52,54,55,15,15,15,15,16,15,16,19,21,21,19,24,28,34,35,38,47,53,54,56,59,60,14,14,14,15,15,14,17,24,30,29,20,21,28,33,37,38,44,51,53,55,61,62,14,13,13,15,14,14,21,29,35,35,28,23,27,30,37,38,40,47,51,58,61,62,13,12,11,14,16,16,27,30,35,40,35,31,31,33,37,39,41,46,53,54,53,53,11,10,11,12,16,22,29,32,40,42,40,38,35,34,38,41,41,45,51,51,53,53,11,9,12,10,14,23,31,39,44,46,45,44,39,37,37,41,46,47,49,52,54,54,13,7,6,8,12,21,32,42,48,50,51,48,43,40,42,45,48,48,49,50,51,51,14,7,5,7,12,22,31,42,48,50,52,49,44,41,44,46,48,48,49,50,51,51],
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
