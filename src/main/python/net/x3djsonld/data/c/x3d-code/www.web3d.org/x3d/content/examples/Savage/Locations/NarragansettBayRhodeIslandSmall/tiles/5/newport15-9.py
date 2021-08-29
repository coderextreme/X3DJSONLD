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
        texture=ImageTexture(url=['../../images/5/newport15-9.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.55915137776267,-71.36222587570239,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[29,27,27,25,24,20,18,16,16,12,3,0,0,0,0,0,0,0,0,0,0,0,0,30,28,29,25,23,23,22,19,16,10,0,0,0,0,0,0,0,0,0,0,0,0,0,30,30,27,24,22,19,19,17,15,10,0,0,0,0,0,0,0,0,0,0,0,0,0,32,31,28,24,22,20,17,15,12,7,0,0,0,0,0,0,0,0,0,0,0,0,0,32,31,29,25,22,19,17,16,12,0,0,0,0,0,0,0,0,0,0,0,0,0,0,33,31,28,26,23,19,16,14,10,0,0,0,0,0,0,0,0,0,0,0,0,0,0,31,29,27,26,24,20,16,13,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,29,28,26,24,22,19,17,15,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,27,25,23,20,17,15,13,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,26,23,20,18,16,13,10,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,29,25,22,21,18,14,11,8,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,27,24,21,20,18,14,10,9,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,27,23,21,20,19,16,12,11,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,24,22,19,17,13,10,8,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,24,23,21,18,15,12,9,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,24,22,19,16,13,11,8,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,22,20,18,15,12,10,8,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,20,18,17,15,12,9,4,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,18,17,15,14,11,8,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,18,15,14,12,10,7,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,17,16,14,11,10,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,15,15,13,10,9,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,13,13,12,9,8,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],
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
