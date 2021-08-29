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
        texture=ImageTexture(url=['../../images/5/newport14-30.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.551080519985156,-71.19273786237466,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[22,24,25,25,25,24,24,24,23,21,19,18,16,15,15,13,11,10,8,6,5,5,7,20,22,23,23,23,23,22,22,21,19,17,16,15,14,13,12,10,8,7,5,5,5,8,18,19,20,20,20,20,19,19,18,17,16,14,13,13,12,10,8,7,5,5,5,6,9,14,15,16,16,17,17,17,16,16,16,15,14,13,11,10,8,7,5,5,5,6,7,10,11,11,12,13,14,14,15,15,15,15,14,13,12,11,9,7,5,5,5,6,8,10,11,9,9,10,11,11,12,13,13,13,14,13,12,12,11,8,6,5,5,6,7,10,12,13,7,8,8,9,9,10,11,12,12,13,14,13,12,10,8,5,4,5,6,8,10,12,14,5,6,6,7,9,9,10,10,11,12,13,14,12,10,7,5,5,5,7,9,11,12,14,3,4,5,6,8,8,9,10,10,11,12,13,12,10,6,4,4,5,7,9,11,13,15,2,3,4,5,7,8,8,9,10,10,11,12,11,8,5,4,4,5,7,9,11,14,16,2,2,2,4,6,7,7,8,9,9,9,9,9,7,4,4,5,6,8,10,12,14,17,1,1,1,3,4,5,6,7,8,8,8,7,6,4,3,4,5,6,8,10,12,14,17,0,0,0,1,2,4,5,6,6,6,6,4,3,2,2,4,6,7,9,11,13,16,19,0,0,0,0,0,2,3,4,4,3,2,2,2,3,4,5,7,8,10,13,15,17,20,0,0,0,0,0,1,1,1,2,2,2,2,3,4,5,7,9,10,11,14,16,19,22,0,0,0,1,1,1,1,1,2,2,2,3,3,5,6,8,9,11,12,15,17,20,23,0,0,0,1,1,1,2,2,2,2,3,3,4,5,6,8,10,11,13,16,19,21,24,0,0,0,0,1,1,2,2,3,3,3,4,4,6,7,8,10,12,13,16,19,21,25,0,0,0,0,0,1,1,2,2,3,3,4,5,6,8,10,11,12,14,17,21,23,25,0,0,0,0,0,1,1,1,2,3,3,4,4,6,8,10,11,13,15,19,22,25,27,0,0,1,0,0,1,1,1,2,2,3,3,4,6,8,10,12,14,17,20,24,26,27,0,1,0,0,0,1,1,1,2,2,2,3,4,6,8,10,13,15,18,21,24,26,27,0,1,0,0,0,1,1,1,1,2,2,3,4,6,8,10,13,15,17,20,23,25,27],
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
