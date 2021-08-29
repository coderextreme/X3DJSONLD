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
        texture=ImageTexture(url=['../../images/5/newport5-8.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.478442799987555,-71.3702967334799,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,7,8,10,9,6,1,0,0,0,0,0,0,0,0,0,0,0,0,2,5,4,4,10,12,13,14,14,9,1,0,0,0,0,0,2,2,3,1,0,0,2,7,10,11,12,14,17,19,17,15,11,2,0,0,5,5,6,7,9,10,10,10,10,11,11,13,13,14,15,19,21,17,14,11,6,3,2,12,12,12,12,14,16,19,20,21,19,16,16,15,15,16,19,21,16,13,11,7,6,6,18,17,18,19,19,21,24,26,26,23,21,19,18,18,18,20,21,17,14,12,9,8,8,23,23,23,23,23,24,26,28,28,26,25,23,22,22,21,21,21,18,16,13,10,9,9,27,27,27,26,26,26,28,30,30,29,28,26,25,23,21,21,20,19,17,15,12,10,10,29,29,29,28,28,28,29,30,31,31,30,29,28,25,23,21,19,18,17,15,13,11,11,29,29,30,29,29,29,29,30,31,31,30,30,29,27,24,21,19,17,16,15,13,12,11,29,30,30,29,29,29,29,29,30,30,30,30,30,28,26,22,20,17,16,16,14,12,12,30,30,30,29,28,29,29,29,29,29,29,30,30,29,27,24,21,19,18,17,15,13,13,30,30,30,29,27,27,27,27,27,27,28,29,30,29,28,25,23,21,20,18,16,15,15,30,30,30,29,26,26,26,26,25,25,26,28,29,29,27,26,24,23,22,20,17,16,16,30,30,30,29,27,26,26,25,24,24,25,26,28,28,27,25,25,25,24,21,19,18,18,28,29,30,30,28,27,26,25,24,23,24,24,25,25,25,24,25,26,26,24,22,20,18,27,28,29,31,29,27,26,25,23,23,23,23,23,23,23,23,24,26,26,24,22,18,18,26,27,29,30,29,27,26,25,22,22,21,21,21,21,21,21,22,24,24,23,21,18,17,26,26,26,27,27,26,25,24,23,21,20,20,20,18,18,18,18,19,21,20,18,17,17,27,26,26,26,26,26,25,24,23,21,20,18,18,17,17,16,16,16,17,17,15,14,14,26,26,25,25,26,26,25,24,22,20,18,17,16,15,14,14,13,13,13,13,12,10,10,26,25,25,25,26,26,25,24,22,20,18,17,16,14,13,12,12,12,11,10,10,9,9],
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
