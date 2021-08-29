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
        texture=ImageTexture(url=['../../images/5/newport3-12.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.46230108443253,-71.33801330236986,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[11,16,19,20,18,17,19,19,19,19,19,17,14,13,12,10,9,8,8,9,9,6,1,14,17,20,20,19,18,19,21,21,21,21,19,17,17,14,12,9,7,7,8,8,9,6,18,19,20,20,20,20,20,22,24,24,24,23,22,23,19,14,10,7,5,6,6,8,8,22,22,22,20,19,19,19,23,26,26,27,27,26,24,21,17,12,8,6,6,6,8,9,23,23,21,19,18,18,18,23,26,27,28,27,26,25,22,18,15,12,10,9,11,11,10,23,22,21,19,17,17,17,21,25,28,28,27,25,23,21,20,19,18,16,15,15,13,11,22,21,19,17,16,15,16,19,23,28,28,25,23,22,21,20,21,22,21,20,19,17,13,19,19,18,16,15,15,16,18,22,25,26,24,22,20,20,21,22,23,22,22,22,21,18,16,17,16,15,15,15,16,17,19,22,23,23,21,20,20,21,22,22,22,23,23,25,24,15,15,14,15,15,15,16,16,17,18,21,22,21,21,21,22,22,22,23,23,25,28,28,13,13,14,15,16,16,16,16,16,17,19,20,20,21,22,22,22,23,23,24,26,28,29,12,13,14,16,17,17,16,16,16,16,16,18,20,21,22,22,22,23,24,24,26,28,29,11,12,14,16,17,17,16,16,16,16,16,16,18,20,20,20,21,23,24,24,26,27,28,10,11,13,15,16,16,16,17,17,17,16,15,16,17,16,17,19,21,23,24,26,27,27,10,10,12,13,15,16,17,18,18,18,15,14,14,14,15,15,17,19,22,24,25,26,26,8,9,10,11,13,15,16,17,18,18,15,13,13,13,13,14,15,18,21,23,25,26,26,7,7,8,9,12,13,15,17,18,18,16,14,13,13,13,12,14,16,19,23,25,27,28,4,4,5,7,10,11,13,16,17,17,17,16,14,14,13,12,12,14,17,23,26,28,29,3,3,3,5,8,10,12,15,16,17,17,16,14,13,12,12,13,14,17,22,26,27,28,3,3,2,4,6,8,11,15,18,18,18,16,14,12,11,11,12,14,17,22,24,26,26,5,3,2,2,3,6,10,14,17,16,16,14,12,11,10,11,12,14,18,21,23,24,24,7,5,4,3,3,5,8,11,14,14,14,11,10,10,11,12,13,15,16,17,20,21,22,8,6,5,4,4,5,6,9,11,11,12,9,8,10,11,13,14,15,15,16,18,19,20],
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
