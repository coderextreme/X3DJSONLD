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
        texture=ImageTexture(url=['../../images/5/newport3-6.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.46230108443253,-71.38643844903493,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,4,4,4,5,4,4,1,0,0,0,0,0,0,0,0,0,0,0,0,1,2,4,6,7,8,8,9,8,7,5,0,0,0,0,0,0,0,0,0,0,0,0,3,7,8,9,10,10,11,13,13,13,10,2,0,0,0,0,0,0,0,0,0,0,0,5,7,9,10,10,11,12,13,14,13,12,8,2,0,0,0,0,0,0,0,0,0,0,6,8,8,9,11,12,12,13,14,13,13,11,3,0,0,0,0,0,0,0,0,0,0,7,8,9,10,11,13,13,14,15,15,15,14,8,1,0,0,0,0,0,0,0,0,0,8,9,11,11,13,15,15,16,17,17,16,15,12,3,0,0,0,0,0,0,0,0,0,9,10,11,13,15,17,18,19,19,19,18,16,13,10,0,0,0,0,0,0,0,0,0,10,11,12,14,16,18,20,20,20,20,19,16,14,12,1,0,0,0,0,0,0,0,0,11,12,13,15,16,18,19,19,19,19,18,16,15,13,2,0,0,0,0,0,0,0,0,12,13,14,15,16,17,18,18,18,18,17,16,15,14,12,0,0,0,0,0,0,0,0,14,14,15,16,17,17,18,17,18,17,16,16,16,15,13,0,0,0,0,0,0,0,0,15,16,16,17,18,18,18,18,18,17,16,16,17,16,14,0,0,0,0,0,0,0,0,16,16,17,17,18,18,18,18,18,18,17,17,17,16,14,0,0,0,0,0,0,0,0],
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
