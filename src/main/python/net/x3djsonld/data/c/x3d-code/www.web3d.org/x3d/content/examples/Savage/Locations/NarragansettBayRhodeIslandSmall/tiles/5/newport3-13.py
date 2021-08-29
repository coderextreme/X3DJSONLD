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
        texture=ImageTexture(url=['../../images/5/newport3-13.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.46230108443253,-71.32994244459235,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,2,4,7,9,8,6,6,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,2,5,9,12,11,9,8,6,4,2,0,0,0,0,0,0,0,0,0,0,0,0,1,3,5,9,14,14,12,9,8,7,6,1,0,0,0,0,0,0,0,0,0,0,0,1,2,5,9,15,16,14,10,8,7,7,5,2,1,1,0,0,0,0,0,0,0,1,3,2,4,7,12,15,15,11,8,7,7,8,5,4,3,0,0,0,0,0,0,0,2,3,1,3,6,10,13,14,13,9,8,9,8,6,5,5,3,1,2,4,3,2,4,5,3,0,2,4,7,11,13,18,15,12,10,9,10,8,7,6,6,6,6,5,5,6,4,2,1,2,3,6,9,11,24,21,17,12,10,13,11,8,9,9,9,8,5,5,6,4,4,3,3,3,5,8,9,28,25,21,16,11,16,13,10,11,12,13,11,5,5,5,4,3,2,2,3,5,7,8,29,27,24,20,15,16,13,11,14,16,14,10,4,3,3,2,2,2,2,3,4,6,7,29,28,27,23,18,16,13,12,16,19,15,10,4,3,0,0,3,3,3,4,5,6,8,28,29,30,26,21,16,13,13,17,19,14,9,3,0,0,0,2,4,5,6,6,6,9,27,28,30,28,24,17,15,16,18,16,11,5,2,1,1,2,3,5,7,9,9,9,12,26,27,29,30,26,19,17,18,19,15,8,3,2,3,3,3,5,7,10,11,12,12,15,26,27,30,31,27,21,20,20,19,15,7,3,3,3,4,5,8,10,13,15,15,15,17,28,28,30,31,27,22,21,20,18,16,9,4,4,5,7,11,13,13,16,18,17,17,16,29,30,31,30,27,24,22,20,18,15,11,6,6,7,11,15,16,16,18,20,18,17,16,28,29,29,29,27,24,22,20,17,14,11,8,8,10,13,17,19,18,20,20,19,18,17,26,27,27,26,25,23,22,19,16,13,11,10,9,11,15,18,20,20,21,21,19,18,18,24,24,24,23,23,22,21,18,14,12,11,10,10,12,15,18,19,20,20,21,19,18,18,22,22,21,19,19,19,18,16,13,11,11,11,11,13,15,16,18,18,19,19,19,18,18,20,20,19,18,18,18,16,15,12,10,10,10,11,13,14,16,17,18,18,18,18,18,18],
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
