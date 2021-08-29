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
        texture=ImageTexture(url=['../../images/5/newport25-10.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.63985995553778,-71.35415501792488,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,8,14,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,10,16,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,10,15,17,14,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,8,13,15,14,9,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,8,10,12,12,10,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,4,7,9,10,12,10,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,3,5,7,8,10,13,13,10,0,0,0,0,0,0,0,0,0,0,0,0,0,1,2,5,7,9,11,12,13,14,12,0,0,0,0,0,0,0,0,0,0,0,0,0,1,3,6,9,10,12,14,14,13,13,0,0,0,0,0,0,0,0,0,0,0,0,0,1,5,9,10,12,14,14,13,12,13,0,0,0,0,0,0,0,0,0,0,0,0,0,3,6,9,11,14,16,16,14,14,15,0,0,0,0,0,0,0,0,0,0,0,0,2,4,7,10,13,15,17,17,17,17,17,0,0,0,0,0,0,0,0,0,0,0,0,1,5,8,12,15,16,17,18,19,20,19,0,0,0,0,0,0,0,0,0,0,0,3,6,8,11,13,15,17,19,20,20,20,20,0,0,0,0,0,0,0,0,0,0,0,2,6,10,13,15,16,17,19,20,20,21,20,0,0,0,0,0,0,0,0,0,0,0,1,5,10,13,16,19,19,19,20,21,22,22,0,0,0,0,0,0,0,0,0,0,4,9,10,13,14,15,17,18,19,18,20,21,23,0,0,0,0,0,0,0,0,0,0,11,11,9,13,13,15,16,18,18,18,21,23,25,0,0,0,0,0,0,0,0,0,0,8,8,8,10,12,14,17,18,16,18,22,24,26,0,0,0,0,0,0,0,0,0,2,7,8,9,13,14,15,18,17,17,21,23,23,25,0,0,0,0,0,0,0,0,1,8,4,7,10,12,13,15,17,18,18,20,22,22,25,0,0,0,0,0,0,0,0,1,6,2,7,10,11,13,16,18,21,21,19,20,21,25,0,0,0,0,0,0,0,0,1,5,4,8,10,12,13,15,17,20,21,19,20,21,24],
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
