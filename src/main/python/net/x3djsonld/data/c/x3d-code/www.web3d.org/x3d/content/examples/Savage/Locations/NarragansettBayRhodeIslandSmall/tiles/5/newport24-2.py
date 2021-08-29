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
        texture=ImageTexture(url=['../../images/5/newport24-2.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.63178909776027,-71.41872188014497,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[6,7,6,5,6,5,7,5,2,0,0,0,1,0,0,0,0,0,0,0,0,1,3,7,9,9,7,6,5,6,3,0,0,0,1,1,0,0,0,0,0,0,0,0,2,4,10,11,11,10,7,6,6,4,1,0,0,1,1,1,1,1,1,1,1,1,1,2,3,11,10,9,8,7,7,7,6,3,1,1,1,1,1,1,1,1,1,1,1,1,2,4,10,9,8,7,7,7,7,7,4,1,1,1,1,1,1,1,1,1,1,1,2,4,5,10,9,8,8,7,7,7,7,4,1,1,1,1,1,1,1,1,2,2,2,3,5,5,9,8,8,8,7,7,7,6,5,2,1,1,1,1,1,2,2,3,3,4,4,5,5,8,7,7,8,9,8,7,6,6,5,4,3,2,2,2,3,4,4,4,4,5,5,5,7,6,5,6,8,9,8,7,7,7,6,5,4,4,4,4,5,5,5,5,4,5,5,7,6,6,6,8,9,8,7,7,8,8,7,7,6,5,5,5,4,4,5,4,5,6,8,8,8,9,8,8,7,7,7,8,9,8,8,7,6,5,4,4,4,4,5,5,6,8,9,9,8,8,8,8,7,8,8,9,9,9,9,7,5,4,5,6,6,6,6,6,9,9,8,8,8,8,9,8,9,9,9,10,11,11,10,8,6,6,6,6,6,6,5,11,9,8,8,8,9,9,9,9,10,10,11,12,12,12,11,10,8,6,5,5,5,5,11,10,9,8,8,8,9,10,11,11,12,12,11,11,10,11,11,9,8,6,5,5,5,10,10,10,9,9,8,10,12,13,13,12,12,10,9,9,9,10,10,9,8,6,5,5,9,11,12,12,10,10,11,13,14,13,12,12,11,9,9,9,9,10,10,9,7,6,5,11,13,14,12,12,12,13,13,13,13,12,12,11,10,9,9,9,9,10,9,7,6,6,15,15,14,12,13,13,13,12,12,12,12,12,11,10,9,9,9,9,9,9,8,7,7,16,14,13,13,14,14,14,13,12,12,12,11,10,9,8,8,8,8,9,10,10,9,8,15,13,13,13,14,16,16,16,15,13,12,9,8,8,8,8,8,10,11,11,10,10,9,13,14,14,14,15,16,16,16,15,13,11,9,9,8,9,9,10,11,10,9,9,9,10,12,14,14,14,15,15,15,14,13,12,11,9,9,9,9,11,11,12,10,9,9,9,9],
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
