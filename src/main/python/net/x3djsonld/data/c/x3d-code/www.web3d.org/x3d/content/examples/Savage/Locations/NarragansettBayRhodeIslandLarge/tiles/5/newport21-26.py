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
        texture=ImageTexture(url=['../../images/5/newport21-26.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.62149034642794,-71.21960164167137,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[0,0,0,0,0,0,0,0,0,0,0,0,10,11,6,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,8,4,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,1,0,0,2,2,2,1,14,20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,8,11,14,11,4,5,7,0,0,0,0,0,0,0,0,0,0,0,0,0,7,10,14,16,19,14,14,9,9,0,0,0,0,0,0,0,0,0,0,0,0,5,12,15,16,19,20,16,13,11,10,2,1,0,0,0,0,0,0,0,0,0,0,8,16,18,19,22,29,29,24,16,12,2,2,2,1,0,0,0,0,0,0,0,4,11,19,22,25,32,36,38,31,19,16,0,0,1,3,1,0,0,0,0,1,2,5,11,19,23,31,45,37,36,30,25,22,0,0,1,4,2,0,0,0,0,0,1,6,11,21,26,33,37,45,38,34,21,20,0,0,1,1,5,0,0,0,0,0,0,4,9,20,26,33,43,50,36,29,28,26,0,2,1,1,1,1,0,0,0,0,0,2,8,19,26,34,47,51,35,31,29,28,1,1,1,1,1,1,1,1,1,1,1,1,6,17,26,36,43,49,38,33,31,29,1,1,1,1,1,1,1,1,1,1,1,1,4,14,25,35,40,45,40,39,34,32,1,1,1,1,4,2,1,1,1,1,1,1,2,12,26,36,39,41,45,44,39,38,2,1,1,1,3,3,1,1,1,1,1,1,4,12,26,37,39,41,48,49,44,44,1,1,1,1,4,5,1,1,1,1,1,1,2,13,25,38,40,43,50,53,48,51,1,1,1,4,4,3,1,1,1,1,1,1,4,15,23,35,41,45,52,45,47,48,1,1,1,5,3,1,1,1,1,1,1,1,5,12,24,32,36,43,43,43,43,43,1,1,3,2,10,3,1,1,1,1,1,1,3,13,22,28,33,39,43,43,46,47,3,4,5,3,8,6,1,1,1,1,1,1,1,11,20,27,34,39,42,46,54,57,1,2,4,5,5,4,4,1,1,1,1,1,1,11,20,27,34,39,42,51,64,66,3,2,2,2,8,8,6,1,1,1,1,1,1,6,15,25,33,38,42,56,68,67,4,2,2,1,8,7,6,1,1,1,1,1,1,4,15,25,33,38,42,56,68,67],
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
