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
        texture=ImageTexture(url=['../../images/5/newport5-15.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.478442799987555,-71.31380072903733,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[0,0,1,2,2,2,3,4,6,7,8,9,9,11,12,13,14,15,16,16,16,17,17,0,0,0,1,2,2,3,4,6,7,8,10,10,11,12,13,14,15,16,16,17,17,17,0,0,0,0,0,2,2,4,5,7,8,10,11,11,12,12,14,15,16,17,18,18,18,0,0,0,0,0,0,2,3,5,7,8,10,12,12,12,12,13,15,17,17,18,18,18,0,0,0,0,0,1,2,3,5,7,9,11,13,13,14,14,15,16,17,17,18,18,18,0,0,1,2,2,2,2,4,6,8,9,11,13,14,15,15,16,17,18,18,18,18,18,0,0,1,2,2,2,3,5,7,9,10,12,14,15,16,17,17,18,18,18,18,18,18,0,0,0,0,1,2,2,4,6,8,10,12,14,16,17,18,18,18,18,18,18,18,18,0,0,0,0,0,1,2,3,5,7,9,11,13,15,17,18,18,18,18,18,19,20,20,0,0,0,0,0,0,2,3,5,7,9,11,13,16,17,18,18,18,19,19,20,20,20,0,0,0,0,0,1,2,4,6,8,10,12,14,16,18,19,20,20,20,20,20,20,20,0,0,0,0,2,3,4,6,8,9,11,13,15,17,19,20,20,20,21,21,21,22,21,0,0,0,2,2,3,5,7,9,10,11,13,15,17,19,20,21,21,21,21,22,22,21,0,0,1,2,2,3,5,7,9,10,11,12,15,17,18,20,21,21,21,21,22,22,21,0,0,1,3,3,3,5,7,8,9,10,12,14,16,18,19,21,21,21,21,22,22,21,0,0,1,3,3,3,4,6,7,8,9,11,13,16,18,20,21,21,21,21,22,22,22,0,0,1,2,2,3,4,6,7,8,9,10,13,15,17,20,21,22,22,22,23,24,23,0,0,1,2,2,3,4,6,7,8,9,10,13,15,18,20,22,23,24,24,24,25,24,0,0,0,0,1,2,4,5,7,8,9,10,13,15,19,21,22,23,25,25,25,25,24,0,0,0,0,1,2,4,5,7,8,9,11,13,16,20,21,22,24,25,25,25,25,24,0,0,0,0,3,3,4,5,7,8,10,11,14,16,20,22,22,23,24,24,25,25,24,0,0,0,1,3,3,4,5,8,9,11,13,15,17,20,22,22,23,24,24,25,25,24,0,0,1,2,3,3,5,6,8,10,12,13,16,18,20,21,22,23,24,24,25,25,24],
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
