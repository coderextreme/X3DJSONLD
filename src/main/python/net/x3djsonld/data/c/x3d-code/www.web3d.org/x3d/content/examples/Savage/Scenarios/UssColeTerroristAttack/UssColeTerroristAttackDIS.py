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

newModel=X3D(profile='Immersive',version='3.0',
  head=head(
    children=[
    component(level=1,name='DIS'),
    meta(content='UssColeTerroristAttackDIS.x3d',name='title'),
    meta(content='Networked model of the terrorist attack on the USS COLE. Run TerroristBoatControlPanel to drive the boat.',name='description'),
    meta(content='James Harney',name='creator'),
    meta(content='5 November 2001',name='created'),
    meta(content='14 January 2014',name='modified'),
    meta(content='SimulationStartPanel.bat',name='reference'),
    meta(content='RhibBoatControlPanel.bat',name='reference'),
    meta(content='TerroristBoatControlPanel.bat',name='reference'),
    meta(content='SimulationStartPanel.java',name='reference'),
    meta(content='ModePanel.java',name='reference'),
    meta(content='AboutSimulator.java',name='reference'),
    meta(content='TerroristBoatControlPanel.java',name='reference'),
    meta(content='TerroristBoatActionInterpreter.java',name='reference'),
    meta(content='RHIBBoatControlPanel.java',name='reference'),
    meta(content='RHIBBoatActionInterpreter.java',name='reference'),
    meta(content='http://www.foia.navy.mil/usscole/index.html',name='reference'),
    meta(content='https://savage.nps.edu/Savage/Scenarios/UssColeTerroristAttack/UssColeTerroristAttack.ppt',name='reference'),
    meta(content='https://savage.nps.edu/Savage/Scenarios/UssColeTerroristAttack/UssColeTerroristAttack.ppt',name='reference'),
    meta(content='http://www.pilotonline.com',name='reference'),
    meta(content='http://www.prop1.org/nucnews/nucnews.htm',name='reference'),
    meta(content='http://www.jpost.com/Editions/2001/08/12/Features/Features.32382.html',name='reference'),
    meta(content='https://savage.nps.edu/Savage/Scenarios/CollisionUssGreenvilleEhimeMaru/CollisionCourses.x3d',name='reference'),
    meta(content='https://savage.nps.edu/Savage/Scenarios/CollisionUssGreenvilleEhimeMaru/CollisionCourses.wrl',name='reference'),
    meta(content='https://savage.nps.edu/Savage/Tools/Animation/WaypointInterpolatorPrototype.x3d',name='reference'),
    meta(content='http://www.fas.org/man/dod-101/navy/docs/swos/cmd/cp17/sld001.htm',name='reference'),
    meta(content='NIMA Chart No. 62098 Banda at Tdwahi, 4th Ed. 30 Sep 1995',name='reference'),
    meta(content='NIMA62098.jpg',name='reference'),
    meta(content='https://savage.nps.edu/Savage/Scenarios/UssColeTerroristAttack/NIMA62098.jpg',name='reference'),
    meta(content='http://www.fas.org/irp/doddir/dod/app-j_THREATCON.htm',name='reference'),
    meta(content='http://www.fas.org/irp/program/core/dted.htm',name='reference'),
    meta(content='USS COLE, Al-Qaida sponsored Terrorist Attacks',name='subject'),
    meta(content='https://savage.nps.edu/Savage/Scenarios/UssColeTerroristAttack/UssColeTerroristAttackDIS.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    ExternProtoDeclare(name='TNTBasedExplosion',url=["PhysicsBasedExplosionPrototype.wrl#TNTBasedExplosion","PhysicsBasedExplosionPrototype.x3d#TNTBasedExplosion","https://savage.nps.edu/Savage/Scenarios/UssColeTerroristAttack/PhysicsBasedExplosionPrototype.wrl#TNTBasedExplosion","https://savage.nps.edu/Savage/Scenarios/UssColeTerroristAttack/PhysicsBasedExplosionPrototype.x3d#TNTBasedExplosion"],
      field=[
      field(accessType='inputOnly',name='startExplosion',type='SFTime')]),
    ExternProtoDeclare(name='TerroristBoat',url=["TerroristBoatPrototype.wrl#TerroristBoat","TerroristBoatPrototype.x3d#TerroristBoat","https://savage.nps.edu/Savage/Scenarios/UssColeTerroristAttack/TerroristBoatPrototype.wrl#TerroristBoat","https://savage.nps.edu/Savage/Scenarios/UssColeTerroristAttack/TerroristBoatPrototype.x3d#TerroristBoat"],
      field=[
      field(accessType='inputOnly',name='startExplosion',type='SFTime')]),
    ExternProtoDeclare(name='ArleighBurke',url=["../../ShipsMilitary/DDGArleighBurkeUnitedStates/ArleighBurkePrototype.wrl#ArleighBurke","https://savage.nps.edu/Savage/ShipsMilitary/Ships/DDGArleighBurkeUnitedStates/ArleighBurkePrototype.wrl#ArleighBurke","../../ShipsMilitary/DDGArleighBurkeUnitedStates//ArleighBurkePrototype.x3d#ArleighBurke","https://savage.nps.edu/Savage/ShipsMilitary/DDGArleighBurkeUnitedStates//ArleighBurkePrototype.x3d#ArleighBurke"],
      field=[
      field(accessType='inputOnly',name='startExplosion',type='SFTime')]),
    ExternProtoDeclare(name='CameraCompass12',url=["../../../Savage/Tools/HeadsUpDisplays/CameraCompassPrototypes.wrl#CameraCompass12","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CameraCompassPrototypes.wrl#CameraCompass12","../../../Savage/Tools/HeadsUpDisplays/CameraCompassPrototypes.x3d#CameraCompass12","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CameraCompassPrototypes.x3d#CameraCompass12"],
      field=[
      field(accessType='inputOutput',name='enabled',type='SFBool'),
      field(accessType='inputOutput',name='positionOffsetFromCamera',type='SFVec3f'),
      field(accessType='inputOutput',name='markerColor',type='SFColor'),
      field(accessType='inputOutput',name='labelColor',type='SFColor')]),
    ExternProtoDeclare(name='RHIB',url=["RHIBPrototype.wrl#RHIB","RHIBPrototype.x3d#RHIB","https://savage.nps.edu/Savage/Scenarios/UssColeTerroristAttack/RHIBPrototype.wrl#RHIB","https://savage.nps.edu/Savage/Scenarios/UssColeTerroristAttack/RHIBBoatPrototype.x3d#RHIB"],
      field=[
      field(accessType='inputOnly',name='startExplosion',type='SFTime')]),
    Group(
      children=[
      NavigationInfo(speed=100,type=["EXAMINE","FLY","ANY"],visibilityLimit=50000),
      Background(groundAngle=[1.309,1.570796],groundColor=[(0.1,0.1,0),(0.4,0.25,0.2),(0.6,0.6,0.6)],skyAngle=[1.309,1.571],skyColor=[(0,0.2,0.7),(0,0.5,1),(1,1,1)]),
      TimeSensor(DEF='MasterClock',loop=True),
      TimeSensor(DEF='TerroristClock',loop=True),
      #  *****************************Main Scene Viewpoints****************** 
      Transform(
        children=[
        Viewpoint(description='Aden Chart',position=(0,.1,4)),
        Viewpoint(description='Aden Chart Close Up',position=(0,.5,2)),
        Viewpoint(description='Harbor View',orientation=(1,0,0,-.95),position=(17000,20000,40000)),
        Viewpoint(description='Overhead RefuelingDolphin Seven',orientation=(1,0,0,-1.57),position=(27838.31,700,14166.67)),
        Viewpoint(description='Final View of Terrorist Attack',position=(27793.31,10,14330))]
        #  ***************************Scene Compass********************** 
        ),
      Transform(DEF='Compass',rotation=(0,1,0,1.57),
        children=[
        ProtoInstance(name='CameraCompass12',
          fieldValue=[
          fieldValue(name='enabled',value=True),
          fieldValue(name='positionOffsetFromCamera',value=(0,5,0)),
          fieldValue(name='markerColor',value=(0.3,0.3,0.8)),
          fieldValue(name='labelColor',value=(1,1,1))])]),
      #  *************Geography and Entry Point Code*** 
      LOD(center=(27793.31,0,14159),
        children=[
        Transform(
          children=[
          Inline(url=["AdenHarbor.wrl","https://savage.nps.edu/Savage/Scenarios/UssColeTerroristAttack/AdenHarbor.wrl","AdenHarbor.x3d","https://savage.nps.edu/Savage/Scenarios/UssColeTerroristAttack/AdenHarbor.x3d"]),
          Inline(url=["AdenHarborChart.wrl","https://savage.nps.edu/Savage/Scenarios/UssColeTerroristAttack/AdenHarborChart.wrl","AdenHarborChart.x3d","https://savage.nps.edu/Savage/Scenarios/UssColeTerroristAttack/AdenHarborChart.x3d"])])]),
      #  *************Refueling Pier Code************* 
      Transform(DEF='RefuelingDolphin',translation=(27793.31,-10,14159),
        children=[
        Inline(url=["RefuelingPierSeven.wrl","https://savage.nps.edu/Savage/Scenarios/UssColeTerroristAttack/RefuelingPierSeven.wrl","RefuelingPierSeven.x3d","https://savage.nps.edu/Savage/Scenarios/UssColeTerroristAttack/RefuelingPierSeven.x3d"])]),
      #  *************COLE Code************* 
      EspduTransform(DEF='Cole',address='224.2.181.145',marking='DDG67',port=62040,rotation=(0,1,0,1.73),siteID=67,translation=(27838.31,0,14167),
        #  traceColor="0 0 1" traceOffset="0 3 0" traceFontSize="6" 
        children=[
        Transform(DEF='ColeTransform',rotation=(0,1,0,1.57),
          children=[
          Transform(DEF='ShockTransform',
            children=[
            ProtoInstance(DEF='DDG-51',name='ArleighBurke')])])]),
      Script(DEF='ColeTimeFilter',
        field=[
        field(accessType='inputOnly',name='setStart',type='SFBool'),
        field(accessType='outputOnly',name='startEventTime',type='SFTime')]),
      ROUTE(fromField='isCollided',fromNode='Cole',toField='setStart',toNode='ColeTimeFilter'),
      ROUTE(fromField='startEventTime',fromNode='ColeTimeFilter',toField='startExplosion',toNode='DDG-51'),
      #  *************Terrorist Boat and Explosion Code*** 
      EspduTransform(DEF='RedBoat',address='224.2.181.145',marking='Terror',port=62040,siteID=65,translation=(27000,-9.5,14000),
        #  traceColor="1 0 0" traceOffset="0 3 0" traceSize="5 5 5" 
        children=[
        Transform(DEF='TerroristBoatTransform',rotation=(0,1,0,1.57),
          children=[
          ProtoInstance(DEF='Boat',name='TerroristBoat'),
          #  ********************Explosion Code***************** 
          Transform(DEF='TNTtransform',translation=(9,0,0),
            children=[
            ProtoInstance(DEF='TerroristExplosion',name='TNTBasedExplosion')])])]),
      Script(DEF='TimeFilter',
        field=[
        field(accessType='inputOnly',name='setStart',type='SFBool'),
        field(accessType='outputOnly',name='startEventTime',type='SFTime')]),
      ROUTE(fromField='isCollided',fromNode='RedBoat',toField='setStart',toNode='TimeFilter'),
      ROUTE(fromField='startEventTime',fromNode='TimeFilter',toField='startExplosion',toNode='TerroristExplosion'),
      ROUTE(fromField='startEventTime',fromNode='TimeFilter',toField='startExplosion',toNode='Boat'),
      #  *******************Cole RHIB code************ 
      EspduTransform(DEF='ColeRHIB',address='224.2.181.145',marking='ColeRHIB',port=62040,siteID=66,translation=(27790,-9,14400),
        #  traceColor="1 0 0" traceOffset="0 3 0" traceSize="5 5 5" 
        children=[
        Transform(rotation=(0,1,0,1.57),
          children=[
          ProtoInstance(DEF='ColeRhib1',name='RHIB')])]),
      #  *******Background entities*********** 
      EspduTransform(DEF='harborTanker',address='224.2.181.145',marking='Tanker',port=62040,readInterval=0,rotation=(0,1,0,3.24),siteID=68,translation=(28550,0,14700),
        #  traceColor="1 1 1" traceOffset="0 5 0" traceSize="6 6 6" 
        children=[
        Transform(DEF='TankerTransform',
          children=[
          Inline(DEF='TANKER',url=["../../ShipsMilitary/Supertanker/SupertankerExampleDay.wrl","https://savage.nps.edu/Savage/ShipsMilitary/Supertanker/SupertankerExampleDay.wrl","../../ShipsMilitary/Supertanker/SupertankerExampleDay.x3d","https://savage.nps.edu/Savage/ShipsMilitary/Supertanker/SupertankerExampleDay.x3d"])])]),
      EspduTransform(DEF='MerchantA',address='224.2.181.145',marking='MerchantA',port=62040,readInterval=0,siteID=69,translation=(27200,-6.5,15100),
        #  traceColor="1 1 1" traceOffset="0 4 0" traceSize="5 5 5" 
        children=[
        Transform(DEF='MerchantATransform',
          children=[
          Inline(DEF='MERCHANT',url=["../../ShipsMilitary/MerchantLivestockCarrier/MerchantLivestockCarrier.wrl","https://savage.nps.edu/Savage/ShipsMilitary/MerchantLivestockCarrier/MerchantLivestockCarrier.wrl","../../ShipsMilitary/MerchantLivestockCarrier/MerchantLivestockCarrier.x3d","https://savage.nps.edu/Savage/ShipsMilitary/MerchantLivestockCarrier/MerchantLivestockCarrier.x3d"])])]),
      EspduTransform(DEF='MerchantB',address='224.2.181.145',marking='MerchantB',port=62040,readInterval=0,rotation=(0,1,0,-.1),siteID=70,translation=(27850,-6.5,14900),
        #  traceColor="1 1 1" traceOffset="0 4 0" traceSize="5 5 5" 
        children=[
        Transform(DEF='MerchantBTransform',
          children=[
          Inline(USE='MERCHANT')])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for UssColeTerroristAttackDIS.py")
