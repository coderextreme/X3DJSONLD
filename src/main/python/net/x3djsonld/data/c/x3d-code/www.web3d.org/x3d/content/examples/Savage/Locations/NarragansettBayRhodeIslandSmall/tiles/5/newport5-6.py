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
        texture=ImageTexture(url=['../../images/5/newport5-6.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.478442799987555,-71.38643844903493,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[23,23,22,20,18,15,12,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,24,23,22,20,17,15,11,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,22,21,19,17,14,10,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,23,22,21,20,17,14,10,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,24,23,21,19,16,13,9,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,26,24,21,18,15,12,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,25,21,18,15,12,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,25,22,19,15,12,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,27,24,22,18,15,12,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,27,23,21,18,15,12,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,27,23,21,18,15,11,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,27,24,21,17,14,11,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,27,25,20,16,13,11,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,27,24,20,16,13,10,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,26,23,19,15,12,10,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,24,22,18,14,12,9,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,22,21,17,13,10,9,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,20,18,15,12,10,7,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,18,16,14,11,8,5,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,15,14,13,10,8,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,13,13,12,10,8,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,12,11,10,9,7,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,11,10,10,9,6,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],
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
