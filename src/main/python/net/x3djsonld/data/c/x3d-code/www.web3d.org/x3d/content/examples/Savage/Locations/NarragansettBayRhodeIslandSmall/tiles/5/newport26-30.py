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
        texture=ImageTexture(url=['../../images/5/newport26-30.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.64793081331529,-71.19273786237466,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[67,67,66,66,65,64,63,60,57,56,56,56,58,60,61,61,61,59,57,55,53,52,52,67,67,66,65,64,63,62,60,58,56,56,57,59,60,62,62,61,59,57,55,53,52,52,69,67,66,65,64,63,62,60,58,57,57,58,59,61,62,62,61,59,57,55,54,53,52,70,68,66,66,65,63,62,60,59,59,59,59,60,61,63,62,61,59,57,55,55,54,53,72,70,67,66,65,63,62,60,60,60,60,60,60,61,62,62,61,59,57,56,57,56,56,74,71,69,66,64,63,62,61,61,62,61,61,61,61,61,61,60,59,58,58,58,58,58,75,73,71,67,64,62,62,61,62,62,62,61,61,61,61,61,60,60,59,59,60,59,59,75,74,71,68,64,62,61,62,62,63,62,62,62,62,62,61,61,60,60,60,61,60,58,64,66,65,65,64,62,62,62,63,63,63,63,62,62,62,61,61,61,61,62,63,60,57,62,64,66,66,64,62,62,62,63,64,65,64,63,63,62,62,62,62,62,64,64,60,59,75,76,74,70,66,62,61,62,63,65,66,66,65,64,62,62,62,63,63,65,63,61,61,73,75,73,69,65,63,63,64,65,66,66,66,65,64,64,63,63,64,65,65,62,61,62,71,72,70,68,65,64,64,66,66,66,66,65,65,65,65,64,64,64,64,64,61,61,61,69,69,67,66,66,65,65,65,65,65,65,65,65,65,65,64,64,63,62,62,62,61,61,67,66,65,65,65,65,65,64,64,64,64,64,64,64,63,64,63,62,62,61,62,62,62,65,64,63,64,65,65,64,64,63,63,63,63,63,63,63,64,64,63,62,62,62,63,63,62,62,62,63,65,64,64,63,63,63,62,62,63,63,65,65,65,64,62,62,63,64,64,61,61,61,62,63,62,62,62,62,62,62,62,63,64,64,65,65,64,64,64,64,65,66,61,61,61,61,61,61,61,62,62,62,62,63,63,64,64,65,65,65,65,65,66,67,68,64,63,63,63,64,64,63,62,62,63,63,63,64,64,65,66,66,65,64,66,67,68,69,66,65,65,66,67,67,66,65,64,64,64,64,64,64,64,65,65,65,65,65,66,67,69,67,67,67,68,69,69,68,67,66,66,66,65,64,64,65,65,66,65,65,66,67,68,69,68,68,68,69,71,70,69,68,67,67,67,65,64,65,65,65,66,66,66,66,67,68,69],
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
