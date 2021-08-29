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
        texture=ImageTexture(url=['../../images/5/newport5-17.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.478442799987555,-71.2976590134823,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[18,18,17,17,16,16,16,13,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,20,20,19,18,17,17,17,14,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,21,20,20,20,18,18,17,14,8,2,0,0,0,0,0,0,0,0,0,0,0,0,0,21,21,20,18,18,18,17,15,11,2,0,0,0,0,0,0,0,0,0,0,0,0,0,21,20,19,18,17,17,17,15,11,2,0,0,0,0,0,0,0,0,0,0,0,0,0,20,20,18,17,16,16,15,15,13,7,0,0,0,0,0,0,0,0,0,0,0,0,0,20,20,19,18,16,15,15,15,13,10,1,0,0,0,0,0,0,0,0,0,0,0,0,21,21,20,19,18,16,16,15,13,10,1,0,0,0,0,0,0,0,0,0,0,0,0,22,22,21,21,20,17,16,15,14,10,0,0,0,0,0,0,0,0,0,0,0,0,0,22,22,22,21,19,18,17,15,13,9,0,0,0,0,0,0,0,0,0,0,0,0,0,22,22,21,20,19,17,17,15,13,8,0,0,0,0,0,0,0,0,0,0,0,0,0,21,21,20,20,19,17,16,15,12,7,0,0,0,0,0,0,0,0,0,0,0,0,0,22,22,20,20,19,18,16,15,13,6,0,0,0,0,0,0,0,0,0,0,0,0,0,23,23,21,20,19,18,17,15,13,6,0,0,0,0,0,0,0,0,0,0,0,0,0,25,24,22,20,19,18,17,14,12,5,0,0,0,0,0,0,0,0,0,0,0,0,0,25,24,22,20,19,18,16,14,11,5,0,0,0,0,0,0,0,0,0,0,0,0,0,24,23,22,20,18,17,15,13,10,4,0,0,0,0,0,0,0,0,0,0,0,0,0,22,22,22,19,17,16,15,13,9,3,0,0,0,0,0,0,0,0,0,0,0,0,0,22,22,21,19,17,16,15,12,8,2,0,0,0,0,0,0,0,0,0,0,0,0,0,22,22,21,19,17,16,14,11,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,22,22,21,19,17,16,14,11,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,22,21,20,18,16,15,13,10,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,21,21,20,18,16,14,12,10,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0],
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
