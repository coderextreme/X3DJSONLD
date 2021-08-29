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
        texture=ImageTexture(url=['../../images/5/newport30-17.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.680214244425336,-71.2976590134823,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[17,15,15,14,11,9,8,7,8,12,14,14,14,15,16,17,16,17,18,20,20,19,19,19,16,14,13,12,11,10,9,10,13,13,13,13,14,15,16,18,19,19,20,20,19,19,18,17,16,15,16,17,16,15,14,13,11,11,11,12,13,13,17,20,21,20,19,18,19,17,18,17,15,15,16,15,13,13,13,11,10,11,15,16,16,18,18,18,16,17,18,19,17,17,17,15,14,13,13,13,12,12,12,12,14,16,16,16,16,15,16,16,17,19,20,17,17,16,17,14,11,11,13,12,11,13,15,15,15,15,14,12,13,17,21,20,18,19,16,15,14,17,16,13,12,13,12,10,13,14,14,15,16,14,11,12,16,21,21,17,16,14,14,14,16,17,16,14,12,10,9,12,13,12,13,15,15,13,13,14,16,15,12,11,14,14,16,17,16,16,15,13,9,7,8,9,8,9,12,15,14,11,10,10,9,9,9,16,16,19,17,14,12,12,12,8,4,2,2,3,4,6,9,9,10,10,10,10,13,13,14,16,17,17,14,10,7,9,5,1,1,1,1,2,4,7,9,12,11,10,12,14,14,13,16,17,15,11,8,5,3,2,1,1,1,1,1,3,6,8,10,10,10,11,12,12,13,13,13,11,7,7,5,2,1,1,1,1,1,1,1,3,4,7,8,9,8,9,8,9,9,8,7,6,5,4,1,1,1,1,1,1,1,1,1,2,3,5,7,7,8,8,7,6,4,2,3,4,5,1,1,1,1,1,1,1,1,1,1,1,3,4,4,5,7,8,6,4,2,2,4,7,2,1,1,1,1,1,1,1,1,1,1,2,2,2,3,5,8,7,5,4,4,2,3,2,1,1,1,1,1,1,1,1,1,1,1,2,3,2,4,9,7,5,3,1,0,0,2,1,1,1,1,1,1,1,1,1,1,1,1,2,2,4,9,6,3,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,0,0,0,2,5,10,5,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,2,2,2,8,4,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,4,4,3,4,3,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,2,5,5,3,6,5,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,2,3,3,2],
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
