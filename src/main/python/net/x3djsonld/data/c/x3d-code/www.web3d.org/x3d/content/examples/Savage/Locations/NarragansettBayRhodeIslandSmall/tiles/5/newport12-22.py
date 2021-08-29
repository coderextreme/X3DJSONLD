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
        texture=ImageTexture(url=['../../images/5/newport12-22.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.53493880443013,-71.25730472459475,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[64,63,63,63,64,66,66,66,64,61,60,62,60,59,60,61,61,61,60,59,59,62,65,67,65,63,62,62,63,62,61,61,61,62,61,60,60,60,62,61,59,60,62,65,66,68,65,63,62,61,60,61,62,61,61,61,60,60,60,60,61,63,63,61,63,66,70,70,68,62,61,61,61,62,62,61,61,61,62,62,63,63,62,63,63,64,63,65,67,69,66,65,61,60,61,61,62,61,60,60,62,63,62,64,65,65,65,63,63,64,67,67,65,62,62,64,62,62,62,62,63,63,61,61,63,65,64,66,67,67,64,65,65,65,66,64,61,61,64,64,63,63,65,63,61,61,61,62,64,64,64,66,65,65,65,63,64,65,64,62,61,63,62,63,63,65,62,62,62,63,64,65,65,63,64,64,64,64,62,62,64,64,63,61,62,63,62,62,64,63,64,63,64,66,67,66,63,63,65,66,64,62,63,62,63,64,60,63,64,64,62,62,62,63,64,61,63,64,66,67,67,67,67,66,64,61,61,61,61,59,64,63,63,63,62,61,63,63,61,60,62,66,68,66,65,67,68,68,64,60,60,62,61,64,63,63,63,62,62,62,62,60,60,63,63,62,63,64,67,68,69,67,64,61,61,62,65,64,65,64,63,63,62,61,62,62,64,64,62,61,64,65,67,68,69,67,68,65,63,65,65,66,64,63,63,62,62,64,64,64,63,62,62,64,66,66,67,69,69,71,69,66,66,66,65,64,63,65,64,64,63,64,63,61,63,64,63,63,63,65,67,67,69,70,69,67,66,66,65,65,66,65,65,62,61,61,61,63,64,65,65,65,67,67,65,66,67,68,68,68,67,67,67,66,64,63,63,62,62,62,63,64,64,66,67,67,66,65,66,66,68,68,68,65,66,66,65,63,63,63,63,62,63,64,63,62,63,66,67,66,66,66,65,66,67,65,63,64,65,66,65,66,66,64,62,64,64,64,65,65,67,70,69,70,68,68,68,70,68,65,64,64,64,66,66,65,63,62,64,65,65,66,65,66,66,66,68,70,71,69,70,69,68,65,62,63,67,65,64,64,64,66,66,68,68,67,65,64,63,65,68,69,67,69,68,68,67,64,65,68,66,65,68,68,67,67,68,67,66,65,64,64,65,65,65,65,71,69,69,68,66,66,67,67,67,68,67,67,67,68,67,65,65,64,65,66,65,62,62],
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
