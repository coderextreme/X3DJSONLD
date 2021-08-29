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
        texture=ImageTexture(url=['../../images/5/newport5-9.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.478442799987555,-71.36222587570239,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,5,5,2,0,0,0,0,0,0,0,0,0,0,0,0,0,1,2,0,0,0,0,4,6,8,4,0,0,0,0,0,0,0,0,0,0,0,0,0,2,4,0,0,0,0,0,4,6,5,2,0,0,0,0,0,0,0,2,1,0,0,0,2,4,0,0,0,0,0,1,3,4,2,0,0,0,0,0,0,0,6,5,0,0,0,0,5,4,0,0,0,0,1,2,1,0,0,0,0,0,0,0,0,8,7,0,0,0,0,3,8,6,3,3,3,5,3,0,0,0,0,0,0,0,0,0,9,8,6,3,1,0,1,6,6,4,5,7,11,6,1,0,0,0,1,4,4,4,0,10,9,7,5,3,3,3,4,5,5,7,10,13,9,5,2,1,2,4,6,7,7,2,11,10,9,7,7,6,5,5,5,5,7,11,14,9,5,3,3,5,6,8,8,6,2,11,11,10,9,10,9,8,7,5,5,6,10,14,9,5,4,5,6,7,9,8,4,0,12,12,12,12,13,12,10,7,5,5,6,9,12,8,4,1,0,3,6,9,6,1,0,13,13,13,14,15,13,10,7,6,5,6,8,9,4,0,0,0,0,2,2,0,0,0,15,15,15,16,16,13,9,7,5,5,6,2,0,0,0,0,0,0,0,0,0,0,0,16,16,16,17,15,11,8,6,4,4,1,0,0,0,0,0,0,0,0,0,0,0,0,18,16,16,15,12,9,6,4,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,18,16,15,13,8,6,4,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,18,16,15,11,7,5,4,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,17,16,14,11,8,6,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,17,15,14,11,8,6,4,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,14,13,12,10,8,6,5,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,10,9,7,6,5,4,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,9,8,7,6,6,5,4,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],
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
