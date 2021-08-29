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
        texture=ImageTexture(url=['../../images/5/newport27-9.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.6560016710928,-71.36222587570239,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,8,6,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,2,5,7,7,7,6,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,5,10,7,8,7,7,7,7,5,0,0,0,0,0,0,0,0,0,0,0,0,0,4,10,9,9,10,8,10,9,10,8,4,2,1,0,0,0,0,0,0,0,0,0,2,7,9,10,10,11,11,11,12,11,10,7,6,4,1,0,0,0,0,0,0,0,0,2,7,9,12,11,12,14,13,14,13,11,10,8,6,3,2,1,0,0,0,0,0,0,2,9,12,15,13,13,13,13,13,12,10,8,7,6,7,6,3,0,0,0,0,0,0,1,6,11,13,14,15,14,13,14,13,12,10,8,7,6,5,5,2,0,0,0,0,0,2,6,12,14,16,16,15,13,14,15,15,11,8,7,6,5,5,3,1,0,0,0,0,4,11,13,15,17,16,15,14,15,16,16,10,6,6,6,6,4,3,2,1,0,0,1,7,15,16,17,19,17,15,15,16,15,14,11,7,6,6,6,5,4,2,0,0,0,5,12,16,18,19,20,17,16,17,15,12,10,10,7,7,8,6,5,4,2,0,0,3,9,15,16,17,18,19,18,17,16,14,12,11,10,8,7,7,7,5,4,3,0,0,7,14,17,17,16,16,18,17,17,14,11,11,12,10,8,8,9,9,6,4,1,1,1,9,15,17,17,16,16,18,17,17,13,11,12,13,10,8,8,8,8,7,4,1,1,2],
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
