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
        texture=ImageTexture(url=['../../images/5/newport19-15.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.59143480887271,-71.31380072903733,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[5,6,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,6,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,9,5,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,7,3,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,8,7,5,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,11,12,12,10,6,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,13,13,13,11,9,6,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,13,12,12,13,12,11,8,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,15,15,14,13,13,11,8,5,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,17,16,15,15,13,11,10,9,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,18,17,17,16,15,13,12,10,7,2,0,0,0,0,0,0,0,0,0,0,0,0,0,21,21,21,19,16,14,13,13,12,7,1,0,0,0,0,0,0,0,0,0,0,0,0,20,21,20,19,18,17,16,15,12,10,5,0,0,0,0,0,0,0,0,0,0,0,0,22,21,21,21,20,17,16,14,13,11,10,1,0,0,0,0,0,0,0,0,0,0,0,28,25,25,23,20,20,18,16,12,11,10,7,0,0,0,0,0,0,0,0,0,0,0,28,27,25,24,23,22,19,17,15,13,11,7,1,0,0,0,0,0,0,0,0,0,0,29,28,26,24,25,22,21,20,19,15,12,9,4,1,0,0,0,0,0,0,0,0,0,29,28,27,27,26,25,23,19,19,17,13,11,8,1,0,0,0,0,0,0,0,0,0,32,31,28,28,27,27,24,21,19,17,13,11,8,2,0,0,0,0,0,0,0,0,0,31,30,29,28,29,28,24,21,20,17,14,12,10,7,1,0,0,0,0,0,0,0,0,30,30,29,28,29,27,25,23,21,18,16,14,11,8,3,0,0,0,0,0,0,0,0],
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
