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

newModel=X3D(profile='Immersive',version='3.3',
  head=head(
    children=[
    component(level=2,name='Geospatial'),
    meta(content='StraitsOfMalaccaWayPoints.x3d',name='title'),
    meta(content='Waypoints of Straits of Malacca',name='description'),
    meta(content='Byounghyun Yoo',name='creator'),
    meta(content='24 July 2008',name='created'),
    meta(content='9 July 2018',name='modified'),
    meta(content='ArcGIS',name='generator'),
    meta(content='https://savage.nps.edu/Savage/Locations/StraitsOfMalaccaLarge/StraitsOfMalaccaLarge.x3d',name='identifier'),
    meta(content='X3D-Edit, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    #  GeoViewpoint description='Default Viewpoint StraitsOfMalaccaLarge' geoSystem='"GD" "WE"' orientation='-1 0 0 1.57' position='0.3471685463819618 100.89750038406439 1792095.085119945' 
    children=[
    GeoViewpoint(description='Viewpoint StraitsOfMalaccaLarge',orientation=(-1,0,0,1.57),position=(0.3471685463819618,100.89750038406439,2010000),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(0.3471685463819618,100.89750038406439,0),geoSystem=["GD"])),
    GeoLocation(DEF='ContainerShipRed',geoCoords=(0.8869992941,92.8767804884,0),
      children=[
      Transform(DEF='ContainerShipRedAxis',scale=(300,300,300),
        children=[
        Inline(url=["../../ShipsCivilian/CargoShips/ContainerShipRed.x3d","https://savage.nps.edu/Savage/ShipsCivilian/CargoShips/ContainerShipRed.x3d"])])],
      geoOrigin=GeoOrigin(USE='ORIGIN')),
    GeoLocation(DEF='ContainerShipBlue',geoCoords=(8.2849709007,96.2388926211,0),
      children=[
      Transform(DEF='ContainerShipBlueAxis',scale=(300,300,300),
        children=[
        Inline(url=["../../ShipsCivilian/CargoShips/ContainerShipBlue.x3d","https://savage.nps.edu/Savage/ShipsCivilian/CargoShips/ContainerShipBlue.x3d"])])],
      geoOrigin=GeoOrigin(USE='ORIGIN')),
    GeoTransform(geoCenter=(0.3471685463819618,100.89750038406439,0),translation=(0,2000,0),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(emissiveColor=(1,0,0))),
        geometry=IndexedLineSet(coordIndex=[0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32],
          coord=GeoCoordinate(point=[(0.8878209480,92.8767804884,0),(-0.7856056734,93.8385199259,0),(-2.2859191959,95.3003638709,0),(-3.8631718735,97.1276688022,0),(-5.2480766635,99.1857911986,0),(-6.1521117348,101.3208527499,0),(-6.5861540186,103.0714821502,0),(-6.5933597415,104.2604264274,0),(-6.2835136571,105.1611417890,0),(-6.0817534161,105.6151023312,0),(-5.9232275125,105.8600969095,0),(-5.3467696811,106.2708231144,0),(-4.4604657653,106.7608122711,0),(-3.7110705845,107.1571270302,0),(-2.6950636567,107.2003613675,0),(-2.0033142590,107.1210984157,0),(-0.9152501023,106.8400752229,0),(-0.3315865480,106.5374348614,0),(0.4250143557,106.0474457047,0),(0.9150035124,105.6655423914,0),(1.2320553196,105.2476104637,0),(1.3473468859,104.8152670902,0),(1.3455911768,104.5518924318,0),(1.2968455216,104.4093634703,0),(1.2623360594,104.3091216991,0),(1.2574061362,104.2031283510,0),(1.2836990598,104.1324661189,0),(1.3231384452,104.0889184642,0),(1.3518963303,104.0683771177,0),(1.3625778305,104.0387975787,0),(1.3584695612,104.0198995398,0),(1.3469664072,104.0034664626,0),(1.3379282147,103.9960715779,0)],
            geoOrigin=GeoOrigin(USE='ORIGIN')))),
      Shape(
        appearance=Appearance(
          material=Material(emissiveColor=(0,0,1))),
        geometry=IndexedLineSet(coordIndex=[0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26],
          coord=GeoCoordinate(point=[(8.2849709007,96.2388926211,0),(6.8936793008,97.5308062496,0),(5.8336476056,98.6239639353,0),(4.7736159104,99.5514916685,0),(3.8460881772,100.1477594971,0),(3.1338793820,100.6777753447,0),(2.6782036379,101.0410093971,0),(2.3846602797,101.3558240131,0),(2.3251007577,101.6834013839,0),(2.1634391981,101.9726904906,0),(1.9124383555,102.3045221129,0),(1.6699460161,102.5895569680,0),(1.4827589471,102.8575748168,0),(1.4104366705,103.1043214078,0),(1.3303264703,103.2439502237,0),(1.2839135926,103.3367759791,0),(1.1989544266,103.4697213406,0),(1.1564748437,103.6003067253,0),(1.1514127881,103.6772698796,0),(1.1670242115,103.7462888039,0),(1.1900305196,103.7947663818,0),(1.2103666303,103.8178129770,0),(1.2306950791,103.8328383522,0),(1.2445419934,103.8425606538,0),(1.2521629893,103.8507486209,0),(1.2559692475,103.8568971917,0),(1.2588971383,103.8618746062,0)],
            geoOrigin=GeoOrigin(USE='ORIGIN'))))]),
    GeoPositionInterpolator(DEF='GeoPositionINTERP1',key=[0,0.03125,0.0625,0.09375,0.125,0.15625,0.1875,0.21875,0.25,0.28125,0.3125,0.34375,0.375,0.40625,0.4375,0.46875,0.5,0.53125,0.5625,0.59375,0.625,0.65625,0.6875,0.71875,0.75,0.78125,0.8125,0.84375,0.875,0.90625,0.9375,0.96875,1],keyValue=[(0.8878209480,92.8767804884,0),(-0.7856056734,93.8385199259,0),(-2.2859191959,95.3003638709,0),(-3.8631718735,97.1276688022,0),(-5.2480766635,99.1857911986,0),(-6.1521117348,101.3208527499,0),(-6.5861540186,103.0714821502,0),(-6.5933597415,104.2604264274,0),(-6.2835136571,105.1611417890,0),(-6.0817534161,105.6151023312,0),(-5.9232275125,105.8600969095,0),(-5.3467696811,106.2708231144,0),(-4.4604657653,106.7608122711,0),(-3.7110705845,107.1571270302,0),(-2.6950636567,107.2003613675,0),(-2.0033142590,107.1210984157,0),(-0.9152501023,106.8400752229,0),(-0.3315865480,106.5374348614,0),(0.4250143557,106.0474457047,0),(0.9150035124,105.6655423914,0),(1.2320553196,105.2476104637,0),(1.3473468859,104.8152670902,0),(1.3455911768,104.5518924318,0),(1.2968455216,104.4093634703,0),(1.2623360594,104.3091216991,0),(1.2574061362,104.2031283510,0),(1.2836990598,104.1324661189,0),(1.3231384452,104.0889184642,0),(1.3518963303,104.0683771177,0),(1.3625778305,104.0387975787,0),(1.3584695612,104.0198995398,0),(1.3469664072,104.0034664626,0),(1.3379282147,103.9960715779,0)]),
    GeoPositionInterpolator(DEF='GeoPositionINTERP2',key=[0,0.038461538,0.076923077,0.115384615,0.153846154,0.192307692,0.230769231,0.269230769,0.307692308,0.346153846,0.384615385,0.423076923,0.461538462,0.5,0.538461538,0.576923077,0.615384615,0.653846154,0.692307692,0.730769231,0.769230769,0.807692308,0.846153846,0.884615385,0.923076923,0.961538462,1],keyValue=[(8.2849709007,96.2388926211,0),(6.8936793008,97.5308062496,0),(5.8336476056,98.6239639353,0),(4.7736159104,99.5514916685,0),(3.8460881772,100.1477594971,0),(3.1338793820,100.6777753447,0),(2.6782036379,101.0410093971,0),(2.3846602797,101.3558240131,0),(2.3251007577,101.6834013839,0),(2.1634391981,101.9726904906,0),(1.9124383555,102.3045221129,0),(1.6699460161,102.5895569680,0),(1.4827589471,102.8575748168,0),(1.4104366705,103.1043214078,0),(1.3303264703,103.2439502237,0),(1.2839135926,103.3367759791,0),(1.1989544266,103.4697213406,0),(1.1564748437,103.6003067253,0),(1.1514127881,103.6772698796,0),(1.1670242115,103.7462888039,0),(1.1900305196,103.7947663818,0),(1.2103666303,103.8178129770,0),(1.2306950791,103.8328383522,0),(1.2445419934,103.8425606538,0),(1.2521629893,103.8507486209,0),(1.2559692475,103.8568971917,0),(1.2588971383,103.8618746062,0)]),
    OrientationInterpolator(DEF='OrientationINTERP1',key=[0,0.03125,0.0625,0.09375,0.125,0.15625,0.1875,0.21875,0.25,0.28125,0.3125,0.34375,0.375,0.40625,0.4375,0.46875,0.5,0.53125,0.5625,0.59375,0.625,0.65625,0.6875,0.71875,0.75,0.78125,0.8125,0.84375,0.875,0.90625,0.9375,0.96875,1],keyValue=[(0,1,0,-1.0491),(0,1,0,-0.7989),(0,1,0,-0.7136),(0,1,0,-0.5951),(0,1,0,-0.4041),(0,1,0,-0.2462),(0,1,0,-0.0073),(0,1,0,0.3324),(0,1,0,0.4200),(0,1,0,0.5766),(0,1,0,0.9537),(0,1,0,1.0669),(0,1,0,1.0851),(0,1,0,1.5283),(0,1,0,1.6848),(0,1,0,1.8235),(0,1,0,2.0492),(0,1,0,2.1455),(0,1,0,2.2328),(0,1,0,2.4924),(0,1,0,2.8808),(0,1,0,-3.1350),(0,1,0,-2.8120),(0,1,0,-2.8100),(0,1,0,-3.0951),(0,1,0,2.7853),(0,1,0,2.4055),(0,1,0,2.1909),(0,1,0,2.7950),(0,1,0,-2.9275),(0,1,0,-2.5307),(0,1,0,-2.2564),(0,1,0,3.1358)]),
    OrientationInterpolator(DEF='OrientationINTERP2',key=[0,0.038461538,0.076923077,0.115384615,0.153846154,0.192307692,0.230769231,0.269230769,0.307692308,0.346153846,0.384615385,0.423076923,0.461538462,0.5,0.538461538,0.576923077,0.615384615,0.653846154,0.692307692,0.730769231,0.769230769,0.807692308,0.846153846,0.884615385,0.923076923,0.961538462,1],keyValue=[(0,1,0,-0.8253),(0,1,0,-0.7720),(0,1,0,-0.8533),(0,1,0,-1.0003),(0,1,0,-0.9316),(0,1,0,-0.8983),(0,1,0,-0.7508),(0,1,0,-0.1799),(0,1,0,-0.5098),(0,1,0,-0.6478),(0,1,0,-0.7051),(0,1,0,-0.6098),(0,1,0,-0.2851),(0,1,0,-0.5210),(0,1,0,-0.4637),(0,1,0,-0.5687),(0,1,0,-0.3145),(0,1,0,-0.0657),(0,1,0,0.2225),(0,1,0,0.4432),(0,1,0,0.7231),(0,1,0,0.9344),(0,1,0,0.9588),(0,1,0,0.7497),(0,1,0,0.5544),(0,1,0,0.5318),(0,1,0,0.5318)]),
    TimeSensor(DEF='TIMER1',cycleInterval=100,loop=True),
    ROUTE(fromField='fraction_changed',fromNode='TIMER1',toField='set_fraction',toNode='GeoPositionINTERP1'),
    ROUTE(fromField='fraction_changed',fromNode='TIMER1',toField='set_fraction',toNode='OrientationINTERP1'),
    ROUTE(fromField='geovalue_changed',fromNode='GeoPositionINTERP1',toField='set_geoCoords',toNode='ContainerShipRed'),
    ROUTE(fromField='value_changed',fromNode='OrientationINTERP1',toField='set_rotation',toNode='ContainerShipRedAxis'),
    TimeSensor(DEF='TIMER2',cycleInterval=40,loop=True),
    ROUTE(fromField='fraction_changed',fromNode='TIMER2',toField='set_fraction',toNode='GeoPositionINTERP2'),
    ROUTE(fromField='fraction_changed',fromNode='TIMER2',toField='set_fraction',toNode='OrientationINTERP2'),
    ROUTE(fromField='geovalue_changed',fromNode='GeoPositionINTERP2',toField='set_geoCoords',toNode='ContainerShipBlue'),
    ROUTE(fromField='value_changed',fromNode='OrientationINTERP2',toField='set_rotation',toNode='ContainerShipBlueAxis')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for StraitsOfMalaccaWayPoints.py")
