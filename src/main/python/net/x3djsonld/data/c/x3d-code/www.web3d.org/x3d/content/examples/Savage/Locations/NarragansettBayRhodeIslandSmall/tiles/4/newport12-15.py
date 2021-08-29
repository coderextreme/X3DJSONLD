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
    GeoLOD(center=(41.63985995553778,-71.18466700459715,0.0),range=2150.0764,child1Url=['../../tiles/5/newport24-30.x3d'],child2Url=['../../tiles/5/newport24-31.x3d'],child3Url=['../../tiles/5/newport25-30.x3d'],child4Url=['../../tiles/5/newport25-31.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport12-15.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.63178909776027,-71.19273786237466,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=7.337143E-4,zDimension=23,zSpacing=7.337143E-4,height=[31,26,30,33,30,35,42,56,62,60,58,51,45,43,40,40,40,40,40,40,40,40,41,31,27,32,35,33,36,42,51,52,49,45,41,41,41,40,40,40,40,40,40,40,40,40,31,29,32,35,38,38,39,41,43,42,41,42,41,40,40,40,40,40,40,40,40,40,41,29,30,32,35,41,43,44,43,42,42,43,41,40,40,40,40,40,40,40,40,41,42,44,29,31,34,39,47,49,50,50,46,43,42,40,40,40,40,40,40,40,40,40,40,41,44,34,36,36,46,53,53,53,52,49,45,40,40,40,40,40,40,41,44,43,41,45,47,48,41,40,40,52,55,56,55,53,50,46,41,40,40,40,40,40,45,49,49,47,50,51,52,46,47,42,46,53,57,57,54,51,46,42,40,41,40,40,40,48,51,50,48,46,49,53,54,54,46,46,54,59,57,54,51,46,43,41,42,42,44,45,51,50,47,46,46,47,47,56,53,48,49,56,60,58,54,49,46,44,43,42,43,48,52,53,50,46,46,46,46,46,56,57,52,52,59,61,58,54,49,46,44,43,43,44,48,56,56,50,46,46,47,49,47,58,58,52,55,62,62,58,53,49,47,45,44,43,43,44,57,57,49,47,48,51,52,50,56,54,53,58,63,62,58,53,51,49,48,45,43,43,43,46,47,44,47,51,55,53,50,57,53,53,59,63,61,57,54,54,52,51,47,44,45,43,43,43,44,47,53,59,55,52,59,54,54,60,63,60,55,53,52,55,54,49,46,47,45,43,44,47,52,58,61,58,54,59,55,56,60,61,59,54,53,53,56,53,49,48,49,47,43,45,49,59,66,65,60,58,59,56,58,61,61,58,54,52,53,55,55,49,51,51,48,45,46,53,66,71,68,63,64,59,59,59,62,61,58,55,54,52,51,51,52,54,53,50,47,48,52,61,67,67,61,57,61,61,61,61,60,59,58,58,58,56,54,53,54,54,53,50,51,51,55,61,62,58,55,62,62,62,62,61,60,61,58,56,57,55,54,53,52,51,50,49,50,52,56,60,56,55,62,65,64,62,62,62,65,59,58,57,57,55,53,53,53,53,53,51,52,52,55,56,55,65,66,66,64,63,64,64,61,61,58,57,56,55,54,55,56,56,56,55,53,53,56,56,66,66,65,65,63,65,63,61,61,59,58,57,55,55,55,57,57,57,55,53,53,56,56],
            geoOrigin=GeoOrigin(USE='ORIGIN')))])])])
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
