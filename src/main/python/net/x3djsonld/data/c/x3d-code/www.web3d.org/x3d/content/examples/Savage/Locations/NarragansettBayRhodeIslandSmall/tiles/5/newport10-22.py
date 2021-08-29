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
        texture=ImageTexture(url=['../../images/5/newport10-22.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.51879708887511,-71.25730472459475,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[61,57,58,61,64,64,64,62,60,61,61,63,65,68,66,62,63,63,65,62,59,58,58,62,61,61,62,63,64,63,60,59,59,61,63,65,67,68,65,65,65,64,59,55,54,56,63,63,62,62,63,63,61,59,59,59,60,62,63,65,68,69,67,64,62,59,56,56,56,64,64,62,62,63,63,61,60,61,60,62,63,62,65,68,69,67,63,59,59,58,59,58,65,65,64,64,63,62,63,62,61,63,64,64,62,62,63,65,64,62,59,56,60,60,58,63,64,64,64,63,63,63,61,60,62,62,61,61,61,62,65,65,62,60,60,63,61,59,62,62,63,63,62,63,61,60,60,61,61,60,60,60,61,62,63,61,59,62,63,60,59,63,62,61,60,60,59,57,58,58,58,58,57,58,59,59,61,62,60,58,59,59,58,58,61,62,61,61,59,57,57,58,58,58,56,56,58,61,63,65,65,64,62,63,62,62,60,65,65,63,61,59,58,59,62,62,59,56,56,58,60,62,63,64,64,65,67,66,64,60,67,65,63,61,59,58,59,62,62,58,56,57,57,58,58,59,60,62,64,66,65,62,59,64,65,64,63,61,59,57,59,60,59,60,61,61,60,60,59,59,61,64,64,62,60,59,62,64,63,61,60,59,56,57,58,58,59,62,63,62,64,64,63,64,65,64,60,58,56,65,64,62,62,59,58,56,56,56,56,56,59,62,63,65,66,65,65,66,64,61,57,54,69,66,65,64,59,56,55,54,57,58,58,58,59,61,62,64,64,65,63,61,58,55,54,72,67,66,64,60,58,56,56,57,58,58,58,58,60,61,62,62,62,61,58,54,53,53,66,67,66,62,62,63,61,59,58,57,59,58,59,60,59,58,58,59,58,55,53,52,51,64,65,66,65,66,65,62,58,58,59,60,60,59,59,58,56,56,57,55,54,52,51,50,64,63,64,66,68,65,62,59,59,59,60,60,58,56,55,55,56,55,54,52,51,51,50,64,64,64,66,67,63,61,58,61,60,60,59,58,57,57,57,56,54,52,50,50,50,50,68,67,67,66,65,62,60,59,60,59,59,59,58,58,57,55,55,54,54,51,50,50,50,68,70,69,67,66,63,61,60,60,59,59,60,59,59,57,56,55,54,53,52,50,49,48,67,71,69,67,67,64,62,60,62,61,60,61,59,57,57,56,55,52,51,51,50,49,48],
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
