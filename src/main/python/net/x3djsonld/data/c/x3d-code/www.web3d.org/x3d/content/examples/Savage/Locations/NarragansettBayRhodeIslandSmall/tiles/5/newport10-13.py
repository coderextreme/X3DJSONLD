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
        texture=ImageTexture(url=['../../images/5/newport10-13.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.51879708887511,-71.32994244459235,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,4,7,10,0,0,0,0,0,0,0,0,0,0,0,0,0,3,4,4,2,1,2,6,9,10,12,0,0,0,0,0,0,3,3,2,2,0,0,2,3,3,4,6,5,5,5,7,9,12,0,0,0,0,0,0,0,0,4,5,3,3,4,4,3,4,6,8,8,9,12,11,11,0,0,0,0,0,0,0,0,0,0,0,3,6,7,6,6,8,9,10,13,16,14,12,0,0,0,0,0,0,0,0,0,0,0,0,2,5,7,8,9,12,14,15,16,15,14,0,0,0,0,0,0,0,0,0,0,0,0,0,4,8,10,12,16,15,15,15,17,18,0,0,0,0,0,0,0,0,0,0,0,0,0,5,9,11,15,18,17,17,20,21,21,0,0,0,0,0,0,0,0,0,0,0,0,0,5,9,11,14,15,16,19,20,20,20,0,0,0,0,0,0,0,0,0,0,0,0,0,4,9,12,13,14,14,15,16,17,17,0,0,0,0,0,0,0,0,0,0,0,0,0,1,6,10,13,15,15,17,19,17,16,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,9,11,12,17,20,20,18,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,5,6,7,11,15,17,17,19,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,4,7,9,11,13,17,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,4,7,12,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],
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
