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
    GeoViewpoint(description='GeoViewpoint_3_75',geoSystem=['GDC'],position=(78.7083383624419,67.4583407093748,3746250.1116469502),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(0.0,0.0,-6378137.0),geoSystem=['GDC'])),
    GeoLOD(center=(78.7083383624419,67.4583407093748,0.0),range=4495500.0,child1Url=['../../tiles/4/world14-10.x3d'],child2Url=['../../tiles/4/world14-11.x3d'],child3Url=['../../tiles/4/world15-10.x3d'],child4Url=['../../tiles/4/world15-11.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/world7-5.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(67.45833802716578,44.95834003882254,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=21,xSpacing=2.25,zDimension=22,zSpacing=1.0714287,height=[69,208,106,156,172,140,281,121,204,170,90,84,65,70,76,75,100,116,151,199,140,171,213,171,145,161,153,285,31,23,31,95,102,110,109,105,71,171,78,165,33,113,70,151,132,204,74,153,194,257,51,96,79,102,90,78,72,40,35,106,104,49,379,27,57,147,73,111,118,65,397,134,7,36,15,33,42,74,31,33,14,91,48,438,16,18,154,126,52,131,127,73,75,321,1,1,-85,12,37,44,33,46,83,49,221,29,-64,39,49,14,147,131,133,82,236,214,44,30,-38,31,9,71,69,94,66,344,-160,-68,-1,-42,6,-36,18,-41,186,101,4,29,32,-48,34,61,14,80,79,277,118,-124,-100,-43,-113,-25,-160,-198,20,-104,-110,45,39,38,16,79,40,20,30,65,51,748,-84,-62,-165,-141,-67,123,-304,-317,-227,-79,12,56,12,-4,10,3,57,1,29,81,91,-227,-167,-176,-52,383,-170,-310,-91,-130,-94,-94,28,28,-30,-9,20,6,45,34,49,53,-338,-304,-240,-142,162,309,-268,-86,-85,-100,-49,-9,-3,-9,-3,-10,34,285,33,18,88,-342,-272,-170,-200,-131,682,98,-342,-223,-117,-64,-19,-19,-21,-21,-24,-35,-20,-19,9,158,-295,-270,-245,-164,-207,-87,312,437,-221,-300,-194,-104,-35,-32,-41,-37,-40,-43,-36,-40,79,-264,-177,-230,-299,-115,-77,-126,-60,-132,617,270,-101,-114,-80,-101,-80,-60,-51,-43,-50,-42,-289,-283,-310,-339,-353,-214,-148,-309,-181,-151,-232,-446,-238,-247,-239,-154,-46,-33,-68,-77,-17,-222,-242,-241,-214,-301,-217,-162,-246,-294,-343,-364,-402,-452,-387,-239,-108,-48,-64,-58,-140,-66,-149,-287,-266,-428,-292,-318,-290,-153,-147,-254,-504,-517,-536,-336,-6,-113,-40,-56,-181,-164,-124,-167,356,-375,210,-281,169,-181,411,-115,-75,-499,-588,-587,-223,-34,-147,-140,-236,-350,-314,-190,-170,-172,-163,-292,-242,-176,259,-150,-13,-252,-553,-622,-653,-598,-347,-243,-397,-497,-603,-350,-103,-2860,-2243,-1907,-1516,-477,-396,-357,-953,-1794,-2096,-1846,-1593,-1716,-2014,-1907,-2255,-2525,-2528,-2534,-2571,-2826,-3832,-3816,-3797,-3802,-3800,-3737,-3666,-3601,-3447,-3378,-3326,-3335,-3323,-3384,-3383,-3409,-3427,-3445,-3505,-3578,-3584,-3835,-3819,-3802,-3800,-3799,-3769,-3688,-3600,-3497,-3399,-3407,-3391,-3373,-3402,-3416,-3433,-3454,-3482,-3536,-3598,-3582],
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
