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
    GeoViewpoint(description='GeoViewpoint_2_22',geoSystem=['GDC'],position=(2.3619186420774487,102.91900048008048,448023.77127998625),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(0.3471685463819618,100.89750038406439,0),geoSystem=['GDC'])),
    GeoLOD(center=(2.3619186420774487,102.91900048008048,0.0),range=537628.5,child1Url=['../../tiles/3/Malacca4-4.x3d'],child2Url=['../../tiles/3/Malacca4-5.x3d'],child3Url=['../../tiles/3/Malacca5-4.x3d'],child4Url=['../../tiles/3/Malacca5-5.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/2/Malacca2-2.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(0.34716854638195915,100.89750038406439,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.19252382,zDimension=22,zSpacing=0.19188096,height=[84,109,48,22,27,13,25,21,27,17,15,9,8,9,4,2,3,8,1,3,4,3,60,57,29,31,44,29,21,10,23,29,31,7,12,6,2,-1,1,7,1,1,4,4,46,32,21,47,8,25,30,34,27,26,23,6,5,4,14,6,4,-2,0,3,2,2,45,21,57,24,26,36,15,5,29,8,13,11,2,5,2,3,27,0,4,3,1,2,44,44,39,48,29,31,16,35,15,6,20,1,2,5,4,3,54,17,37,2,4,4,33,30,27,33,40,35,20,23,3,3,2,2,5,1,3,12,10,15,2,3,4,4,23,20,10,16,39,27,12,10,3,3,1,2,2,12,32,20,39,3,2,2,1,1,3,3,8,3,-1,4,3,4,2,3,5,9,12,68,35,11,32,2,1,3,1,2,3,35,2,32,4,2,2,4,4,9,7,10,53,96,34,12,3,4,4,3,2,1,29,29,13,-10,5,2,4,4,12,153,50,22,44,112,487,51,2,2,4,4,2,1,4,0,-4,3,2,2,41,38,12,18,91,75,196,32,48,38,164,2,3,3,3,3,1,0,1,2,2,24,40,159,73,29,40,256,347,29,44,1,4,4,2,3,3,2,3,3,0,11,10,64,725,131,56,40,86,107,206,10,3,2,0,3,4,4,3,2,3,3,4,9,13,56,337,222,66,51,59,23,8,5,5,3,4,3,3,4,3,4,-1,1,0,17,41,132,274,566,54,94,62,25,32,5,4,4,-99,-99,-99,-99,-99,-99,0,2,9,34,240,648,174,62,53,263,52,101,30,5,5,4,-99,-99,-99,-99,-99,-99,2,3,26,57,126,169,71,42,40,103,26,18,29,6,5,6,-99,-99,-99,-99,-99,-99,0,10,15,49,905,153,138,70,76,475,140,47,8,5,5,6,-99,-99,-99,-99,-99,-99,5,10,69,61,1193,139,815,123,80,134,706,22,95,4,5,5,-99,-99,-99,-99,-99,-99,4,8,70,1139,258,258,180,94,245,343,355,149,42,8,5,5,-99,-99,-99,-99,-99,-99,15,21,991,943,219,129,113,188,339,396,1117,247,12,6,7,7,-99,-99,-99,-99,-99,-99,19,22,1041,979,208,131,111,245,309,389,1145,222,13,5,7,7,-99,-99,-99,-99,-99,-99],
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
