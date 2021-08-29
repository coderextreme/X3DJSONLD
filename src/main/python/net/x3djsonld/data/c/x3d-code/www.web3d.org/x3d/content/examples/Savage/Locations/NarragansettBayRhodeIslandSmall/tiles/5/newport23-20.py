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
        texture=ImageTexture(url=['../../images/5/newport23-20.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.62371823998276,-71.27344644014977,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[0,0,0,0,0,0,0,0,0,2,5,7,7,8,9,10,11,12,12,11,12,15,15,0,0,0,0,0,0,0,0,1,5,6,7,8,9,9,11,15,14,12,11,11,13,14,0,0,0,0,0,0,0,0,2,6,7,8,8,10,11,13,17,15,12,12,13,14,15,0,0,0,0,0,0,0,0,1,4,7,6,6,8,8,10,12,12,12,13,14,15,16,0,0,0,0,0,0,0,0,1,2,5,5,5,5,7,8,10,12,14,15,16,15,15,0,0,0,0,0,0,0,0,2,3,4,5,6,6,8,9,10,12,14,16,16,16,16,0,0,0,0,0,0,0,2,3,3,6,9,10,9,9,8,9,10,13,15,17,18,18,0,0,0,0,0,0,0,4,2,5,6,7,9,10,10,8,9,11,14,15,18,18,17,0,0,0,0,0,0,1,1,2,5,5,5,9,9,9,10,9,11,14,16,17,17,17,0,0,0,0,0,0,0,0,1,2,4,5,7,7,8,10,10,12,14,17,18,18,18,0,0,0,0,0,0,1,1,0,1,3,5,4,6,8,12,15,17,19,19,19,19,18,0,0,0,0,0,0,0,2,1,0,1,3,5,7,9,12,16,20,22,21,19,18,17,0,0,0,0,0,0,0,0,0,0,0,2,6,8,10,11,17,22,22,21,20,17,15,0,0,0,0,0,0,0,0,0,0,0,1,4,7,10,13,18,22,22,19,16,14,14,0,0,0,0,0,0,0,0,0,0,1,4,6,8,12,13,17,19,19,16,12,13,13,0,0,0,0,0,0,0,0,0,0,2,5,5,7,9,11,14,15,14,13,12,12,11,0,0,0,0,0,0,0,0,0,0,0,2,5,5,8,10,11,10,11,12,13,12,10,0,0,0,0,0,0,0,0,0,0,0,1,3,7,9,9,10,9,10,11,11,11,9,0,0,0,0,0,0,0,0,0,0,0,0,1,7,10,10,10,10,9,9,8,8,7,0,0,0,0,0,0,0,0,0,0,0,0,0,4,8,6,6,7,6,6,7,7,7,0,0,0,0,0,0,0,0,0,0,0,0,0,1,4,3,3,3,4,5,6,6,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,2,2,2,2,3,4,4,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,2,2,3,3],
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
