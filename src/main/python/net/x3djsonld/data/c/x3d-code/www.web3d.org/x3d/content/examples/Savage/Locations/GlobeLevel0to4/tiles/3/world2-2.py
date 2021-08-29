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
    GeoViewpoint(description='GeoViewpoint_3_22',geoSystem=['GDC'],position=(-33.79166499031936,-67.54166331393873,3746250.1116469502),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(0.0,0.0,-6378137.0),geoSystem=['GDC'])),
    GeoLOD(center=(-33.79166499031936,-67.54166331393873,0.0),range=4495500.0,child1Url=['../../tiles/4/world4-4.x3d'],child2Url=['../../tiles/4/world4-5.x3d'],child3Url=['../../tiles/4/world5-4.x3d'],child4Url=['../../tiles/4/world5-5.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/world2-2.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(-45.04166532559549,-90.04166398449098,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=21,xSpacing=2.25,zDimension=22,zSpacing=1.0714287,height=[-3812,-3928,-4217,-3416,-3024,-3509,-3016,120,296,386,213,-79,-69,-196,-2388,-4844,-6045,-6089,-5827,-5619,-5330,-3997,-3987,-4226,-3338,-3401,-3191,-3146,23,1191,451,417,-92,-85,-112,-1965,-5467,-5843,-6026,-5658,-5319,-5161,-4174,-3893,-3735,-3442,-3083,-3304,-3102,41,560,788,271,125,-90,-85,-2054,-5295,-5683,-5837,-5348,-5017,-4995,-4078,-3686,-3831,-3145,-3321,-3637,-3579,2,1498,830,225,41,-68,-23,-1553,-4463,-5563,-5720,-5444,-5232,-5128,-3586,-3668,-3419,-2909,-3484,-3579,-3508,-76,1822,889,1080,166,-45,-83,-99,-3518,-5405,-5611,-5769,-5252,-5068,-2867,-3269,-3732,-3616,-3952,-3296,-3774,-827,328,1197,730,157,50,-25,-80,-1355,-5025,-5578,-5528,-5189,-5098,-3279,-3908,-4462,-4048,-4023,-4095,-3847,-1039,1236,705,488,167,35,-37,-82,-99,-4190,-5344,-5429,-5266,-5133,-3177,-3551,-4189,-4030,-4002,-4076,-3938,-2323,292,848,374,195,29,11,-45,-96,-1767,-4838,-5285,-5226,-5161,-3557,-3717,-3735,-3528,-3967,-4237,-4121,-3184,254,786,346,228,200,195,180,-74,-1419,-4271,-5094,-5136,-5145,-3781,-3974,-4004,-3654,-4018,-4092,-4025,-4569,136,1149,569,389,132,137,56,-11,-125,-3565,-4763,-4982,-5042,-3516,-3750,-3939,-3920,-3918,-3970,-4179,-4842,296,2992,508,318,107,80,20,-11,-43,-2330,-4283,-4835,-4842,-3692,-3920,-3989,-3805,-3709,-3997,-4045,-4087,-170,3146,494,355,130,71,12,22,4,-334,-3426,-4622,-4788,-3602,-3628,-3953,-3838,-3978,-1055,-3614,-3935,-1162,3919,525,617,124,76,2,108,19,-57,-1879,-3673,-4055,-3575,-3747,-3846,-3793,-3938,-4017,-4088,-3913,-2184,3526,510,740,188,28,44,111,97,-30,-1798,-3516,-4081,-3391,-3347,-3919,-3857,-3877,-4096,-4129,-4019,-3168,3421,600,1073,160,23,65,184,238,-12,-472,-3205,-3521,-3631,-3668,-3249,-3875,-4046,-2484,-4197,-4259,-3629,4557,1206,188,74,50,66,117,82,82,-63,-1405,-3444,-3607,-3743,-3937,-3952,-4233,-3838,-4078,-4146,-5201,4392,1829,435,92,61,47,86,447,371,1,-1223,-3490,-3484,-3688,-3800,-3863,-4028,-3609,-4239,-4312,-5322,2260,1386,489,125,66,66,68,397,589,1600,-174,-3112,-3403,-2697,-3969,-3688,-3816,-3894,-3793,-4057,-4299,1851,3108,394,178,101,59,89,511,1089,413,-121,-2331,-3873,-3546,-3137,-3572,-3954,-4064,-3772,-4497,-3848,1438,3852,1772,239,126,74,130,362,1017,815,-66,-996,-3414,-3462,-3975,-3807,-3978,-4581,-4484,-3069,-4259,2123,3471,1179,252,143,90,142,302,1085,868,-37,-105,-2649,-3685,-3694,-3701,-3942,-4444,-4573,-3047,-4348,2071,3471,1226,245,143,86,172,251,986,1003,-50,-94],
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
