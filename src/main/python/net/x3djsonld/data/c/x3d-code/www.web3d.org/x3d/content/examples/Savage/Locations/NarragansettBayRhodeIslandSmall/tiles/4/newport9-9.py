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
    GeoLOD(center=(41.59143480887271,-71.28151729792728,0.0),range=2150.0764,child1Url=['../../tiles/5/newport18-18.x3d'],child2Url=['../../tiles/5/newport18-19.x3d'],child3Url=['../../tiles/5/newport19-18.x3d'],child4Url=['../../tiles/5/newport19-19.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport9-9.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.5833639510952,-71.28958815570479,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=24,xSpacing=7.018137E-4,zDimension=24,zSpacing=7.018137E-4,height=[0,0,0,0,0,0,0,0,0,2,8,16,30,37,47,52,50,54,56,56,56,54,52,52,0,0,0,0,0,0,0,0,0,3,7,17,29,35,43,49,49,51,54,56,55,53,51,51,0,0,0,0,0,0,0,0,0,1,5,10,12,22,38,45,49,51,49,53,53,49,46,46,0,0,0,0,0,0,0,0,4,0,5,7,11,21,33,44,51,49,48,49,50,48,43,43,0,0,0,0,0,0,0,0,0,1,2,5,11,19,31,42,46,49,47,51,49,49,47,46,0,0,0,0,0,0,0,0,6,3,1,5,12,22,29,40,43,47,47,49,51,52,50,49,0,0,0,0,0,0,0,3,5,4,5,4,10,18,27,39,44,51,51,51,54,53,51,50,0,0,0,0,0,0,1,3,4,5,6,8,15,20,29,39,48,56,58,56,54,54,52,51,0,0,0,0,0,0,6,5,0,4,9,13,15,22,28,38,51,58,57,60,61,56,56,55,0,0,0,0,0,0,4,2,1,2,7,14,19,25,31,37,48,54,61,65,65,57,51,50,0,0,0,0,0,0,2,6,2,4,6,15,18,22,29,34,46,50,51,54,59,53,48,48,0,0,0,0,0,0,1,4,3,4,7,12,17,27,29,34,37,42,44,48,49,47,44,42,0,0,0,0,0,0,5,2,2,0,5,11,14,19,24,28,29,34,38,43,45,38,38,39,0,0,0,0,0,0,3,7,1,0,0,8,9,12,17,23,25,28,33,35,31,32,33,33,0,0,0,0,0,0,0,1,0,0,0,3,6,7,12,13,16,20,23,24,25,25,34,34,0,0,0,0,0,0,0,0,0,0,0,0,3,5,8,11,14,16,19,14,15,29,30,31,0,0,0,0,0,0,0,0,0,0,0,0,4,2,1,5,11,13,13,17,19,23,25,26,0,0,0,0,0,0,0,0,1,1,1,0,1,1,2,1,7,11,11,15,22,23,25,25,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,6,7,10,13,17,20,20,22,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,8,12,13,13,18,21,23,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,10,10,11,13,18,21,22,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,8,8,14,18,18,18,19,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,10,13,15,14,20,22,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,10,14,15,14,20,22],
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
