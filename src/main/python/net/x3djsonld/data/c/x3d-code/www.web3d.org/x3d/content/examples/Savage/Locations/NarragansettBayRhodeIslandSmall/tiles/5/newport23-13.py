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
        texture=ImageTexture(url=['../../images/5/newport23-13.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.62371823998276,-71.32994244459235,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,13,13,14,17,19,22,25,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,9,11,13,16,18,21,25,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,7,10,13,16,18,22,25,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,11,13,16,20,23,25,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,9,14,19,23,24,25,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,11,15,18,22,24,24,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,12,14,16,19,21,22,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,11,14,16,18,20,21,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,7,12,15,17,19,21,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,6,10,13,17,19,20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,8,8,10,15,20,21,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,9,8,9,12,17,19,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,6,8,10,13,15,16,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,7,11,13,15,14,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,5,8,9,11,10,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,5,7,7,9,9,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,4,5,5,6,9,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,3,6,7,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,4,5,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,2,3,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,2],
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
