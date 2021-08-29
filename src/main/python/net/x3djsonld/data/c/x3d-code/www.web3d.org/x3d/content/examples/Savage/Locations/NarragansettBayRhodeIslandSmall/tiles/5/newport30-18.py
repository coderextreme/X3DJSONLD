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
        texture=ImageTexture(url=['../../images/5/newport30-18.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.680214244425336,-71.28958815570479,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[19,18,17,19,16,14,14,11,8,7,6,2,0,0,0,0,0,0,0,0,0,0,0,19,19,19,23,19,15,14,13,11,9,7,4,0,0,0,0,0,0,0,0,0,0,0,19,22,22,23,20,15,13,12,11,9,7,3,0,0,0,0,0,0,0,0,0,0,0,19,19,19,19,18,16,13,12,12,10,8,3,0,0,0,0,0,0,0,0,0,0,0,20,19,18,18,18,16,14,12,10,10,9,4,0,0,0,0,0,0,0,0,0,0,0,19,17,15,15,16,16,14,12,10,9,10,5,0,0,0,0,0,0,0,0,0,0,0,16,15,12,12,14,14,13,11,10,10,9,4,0,0,0,0,0,0,0,0,0,0,0,11,11,9,10,14,13,14,13,11,10,8,2,0,0,0,0,0,0,0,0,0,0,0,9,11,11,13,16,13,11,11,9,9,8,2,0,0,0,0,0,0,0,0,0,0,0,13,11,11,12,14,13,12,12,9,6,6,2,0,0,0,0,0,0,0,0,0,0,0,14,13,12,10,9,10,10,10,8,7,6,1,0,0,0,0,0,0,0,0,0,0,0,12,12,11,8,6,8,8,7,8,9,8,2,0,0,0,0,0,0,0,0,0,0,0,8,9,8,8,9,10,8,7,7,10,8,2,0,0,0,0,0,0,0,0,0,0,0,8,8,9,10,10,10,8,7,7,6,3,0,0,0,0,0,0,0,0,0,0,0,0,7,8,9,9,9,10,7,5,5,3,1,0,0,0,0,0,0,0,0,0,0,0,0,5,6,6,6,6,7,7,6,6,4,1,0,0,0,0,0,0,0,0,0,0,0,0,4,5,6,5,4,4,5,5,4,3,0,0,0,0,0,0,0,0,0,0,0,0,0,4,5,7,5,3,3,5,4,3,2,0,0,0,0,0,0,0,0,0,0,0,0,0,5,4,4,3,3,4,6,6,3,1,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,4,3,3,4,4,4,3,2,0,0,0,0,0,0,0,0,0,0,0,0,0,3,3,2,3,3,3,2,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,3,3,3,3,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,3,4,3,3,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],
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
