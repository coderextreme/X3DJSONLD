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
        texture=ImageTexture(url=['../../images/5/newport28-17.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.664072528870314,-71.2976590134823,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[18,18,18,16,17,14,10,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,19,21,19,17,17,14,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,19,20,20,18,16,11,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,20,17,19,18,14,10,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,19,18,20,17,15,10,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,21,20,20,19,16,11,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,22,20,20,17,12,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,23,21,19,14,9,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,26,24,21,20,16,10,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,24,21,20,19,15,8,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,22,19,19,17,15,11,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,22,21,20,18,17,15,14,10,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,22,23,22,18,16,15,13,10,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,23,21,18,16,13,12,9,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,21,23,21,17,13,10,11,11,7,1,0,0,0,0,0,0,0,0,0,0,0,0,0,23,23,21,17,13,10,10,12,10,3,0,0,0,0,0,0,0,0,0,0,0,0,0,25,22,20,16,13,11,11,11,9,3,0,0,0,0,0,0,0,0,0,2,2,0,0,21,18,17,14,11,12,11,11,9,4,0,0,0,0,0,0,0,3,5,4,3,3,2,17,16,15,12,11,12,12,12,10,4,0,0,0,0,0,0,2,5,7,7,7,7,4,18,16,15,13,11,12,13,14,11,5,1,0,0,0,0,0,1,4,7,9,9,8,6,18,15,14,12,11,13,15,15,12,10,6,2,0,0,0,0,0,4,8,10,10,9,7,17,17,15,14,14,16,15,15,14,14,12,5,0,0,0,0,0,5,9,11,11,10,10,16,18,16,15,16,17,15,15,14,15,12,6,1,0,0,0,1,6,9,11,12,11,11],
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
