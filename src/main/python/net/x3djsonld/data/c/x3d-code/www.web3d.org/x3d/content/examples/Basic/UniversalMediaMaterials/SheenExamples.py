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
    meta(content='SheenExamples.x3d',name='title'),
    meta(content="Example ExternProtoDeclare/ProtoInstance usage of X3D/VRML materials, originally converted from SGI's Open Inventor material examples.",name='description'),
    meta(content='David Roussel',name='creator'),
    meta(content='James Harney, Don Brutzman NPS',name='translator'),
    meta(content='7 April 2002',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='http://vrmlstuff.free.fr/materials',name='reference'),
    meta(content='Universal Media Material Library',name='subject'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SheenExamples.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='SheenExamples.x3d'),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Sheen00',url=["SheenPrototypes.x3d#Sheen00","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SheenPrototypes.x3d#Sheen00","SheenPrototypes.wrl#Sheen00","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SheenPrototypes.wrl#Sheen00"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Sheen01',url=["SheenPrototypes.x3d#Sheen01","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SheenPrototypes.x3d#Sheen01","SheenPrototypes.wrl#Sheen01","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SheenPrototypes.wrl#Sheen01"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Sheen02',url=["SheenPrototypes.x3d#Sheen02","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SheenPrototypes.x3d#Sheen02","SheenPrototypes.wrl#Sheen02","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SheenPrototypes.wrl#Sheen02"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Sheen03',url=["SheenPrototypes.x3d#Sheen03","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SheenPrototypes.x3d#Sheen03","SheenPrototypes.wrl#Sheen03","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SheenPrototypes.wrl#Sheen03"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Sheen04',url=["SheenPrototypes.x3d#Sheen04","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SheenPrototypes.x3d#Sheen04","SheenPrototypes.wrl#Sheen04","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SheenPrototypes.wrl#Sheen04"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Sheen05',url=["SheenPrototypes.x3d#Sheen05","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SheenPrototypes.x3d#Sheen05","SheenPrototypes.wrl#Sheen05","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SheenPrototypes.wrl#Sheen05"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Sheen06',url=["SheenPrototypes.x3d#Sheen06","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SheenPrototypes.x3d#Sheen06","SheenPrototypes.wrl#Sheen06","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SheenPrototypes.wrl#Sheen06"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Sheen07',url=["SheenPrototypes.x3d#Sheen07","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SheenPrototypes.x3d#Sheen07","SheenPrototypes.wrl#Sheen07","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SheenPrototypes.wrl#Sheen07"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Sheen08',url=["SheenPrototypes.x3d#Sheen08","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SheenPrototypes.x3d#Sheen08","SheenPrototypes.wrl#Sheen08","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SheenPrototypes.wrl#Sheen08"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Sheen09',url=["SheenPrototypes.x3d#Sheen09","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SheenPrototypes.x3d#Sheen09","SheenPrototypes.wrl#Sheen09","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SheenPrototypes.wrl#Sheen09"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Sheen10',url=["SheenPrototypes.x3d#Sheen10","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SheenPrototypes.x3d#Sheen10","SheenPrototypes.wrl#Sheen10","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SheenPrototypes.wrl#Sheen10"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Sheen11',url=["SheenPrototypes.x3d#Sheen11","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SheenPrototypes.x3d#Sheen11","SheenPrototypes.wrl#Sheen11","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SheenPrototypes.wrl#Sheen11"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Sheen12',url=["SheenPrototypes.x3d#Sheen12","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SheenPrototypes.x3d#Sheen12","SheenPrototypes.wrl#Sheen12","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SheenPrototypes.wrl#Sheen12"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Sheen13',url=["SheenPrototypes.x3d#Sheen13","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SheenPrototypes.x3d#Sheen13","SheenPrototypes.wrl#Sheen13","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SheenPrototypes.wrl#Sheen13"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Sheen14',url=["SheenPrototypes.x3d#Sheen14","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SheenPrototypes.x3d#Sheen14","SheenPrototypes.wrl#Sheen14","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SheenPrototypes.wrl#Sheen14"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Sheen15',url=["SheenPrototypes.x3d#Sheen15","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SheenPrototypes.x3d#Sheen15","SheenPrototypes.wrl#Sheen15","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SheenPrototypes.wrl#Sheen15"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Sheen16',url=["SheenPrototypes.x3d#Sheen16","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SheenPrototypes.x3d#Sheen16","SheenPrototypes.wrl#Sheen16","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SheenPrototypes.wrl#Sheen16"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Sheen17',url=["SheenPrototypes.x3d#Sheen17","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SheenPrototypes.x3d#Sheen17","SheenPrototypes.wrl#Sheen17","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SheenPrototypes.wrl#Sheen17"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Sheen18',url=["SheenPrototypes.x3d#Sheen18","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SheenPrototypes.x3d#Sheen18","SheenPrototypes.wrl#Sheen18","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SheenPrototypes.wrl#Sheen18"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Sheen19',url=["SheenPrototypes.x3d#Sheen19","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SheenPrototypes.x3d#Sheen19","SheenPrototypes.wrl#Sheen19","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SheenPrototypes.wrl#Sheen19"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Sheen20',url=["SheenPrototypes.x3d#Sheen20","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SheenPrototypes.x3d#Sheen20","SheenPrototypes.wrl#Sheen20","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SheenPrototypes.wrl#Sheen20"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Sheen21',url=["SheenPrototypes.x3d#Sheen21","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SheenPrototypes.x3d#Sheen21","SheenPrototypes.wrl#Sheen21","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SheenPrototypes.wrl#Sheen21"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Sheen22',url=["SheenPrototypes.x3d#Sheen22","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SheenPrototypes.x3d#Sheen22","SheenPrototypes.wrl#Sheen22","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SheenPrototypes.wrl#Sheen22"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Sheen23',url=["SheenPrototypes.x3d#Sheen23","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SheenPrototypes.x3d#Sheen23","SheenPrototypes.wrl#Sheen23","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SheenPrototypes.wrl#Sheen23"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Sheen24',url=["SheenPrototypes.x3d#Sheen24","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SheenPrototypes.x3d#Sheen24","SheenPrototypes.wrl#Sheen24","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SheenPrototypes.wrl#Sheen24"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Sheen25',url=["SheenPrototypes.x3d#Sheen25","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SheenPrototypes.x3d#Sheen25","SheenPrototypes.wrl#Sheen25","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SheenPrototypes.wrl#Sheen25"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Sheen26',url=["SheenPrototypes.x3d#Sheen26","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SheenPrototypes.x3d#Sheen26","SheenPrototypes.wrl#Sheen26","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SheenPrototypes.wrl#Sheen26"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Sheen27',url=["SheenPrototypes.x3d#Sheen27","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SheenPrototypes.x3d#Sheen27","SheenPrototypes.wrl#Sheen27","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SheenPrototypes.wrl#Sheen27"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Sheen28',url=["SheenPrototypes.x3d#Sheen28","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SheenPrototypes.x3d#Sheen28","SheenPrototypes.wrl#Sheen28","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SheenPrototypes.wrl#Sheen28"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Sheen29',url=["SheenPrototypes.x3d#Sheen29","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SheenPrototypes.x3d#Sheen29","SheenPrototypes.wrl#Sheen29","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SheenPrototypes.wrl#Sheen29"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Sheen30',url=["SheenPrototypes.x3d#Sheen30","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SheenPrototypes.x3d#Sheen30","SheenPrototypes.wrl#Sheen30","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SheenPrototypes.wrl#Sheen30"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Sheen31',url=["SheenPrototypes.x3d#Sheen31","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SheenPrototypes.x3d#Sheen31","SheenPrototypes.wrl#Sheen31","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SheenPrototypes.wrl#Sheen31"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Sheen32',url=["SheenPrototypes.x3d#Sheen32","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SheenPrototypes.x3d#Sheen32","SheenPrototypes.wrl#Sheen32","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SheenPrototypes.wrl#Sheen32"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Sheen33',url=["SheenPrototypes.x3d#Sheen33","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SheenPrototypes.x3d#Sheen33","SheenPrototypes.wrl#Sheen33","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SheenPrototypes.wrl#Sheen33"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Sheen34',url=["SheenPrototypes.x3d#Sheen34","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SheenPrototypes.x3d#Sheen34","SheenPrototypes.wrl#Sheen34","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SheenPrototypes.wrl#Sheen34"]),
    Group(
      children=[
      NavigationInfo(headlight=False),
      Viewpoint(DEF='Front',description='Front view',position=(0.0,0.0,12.0)),
      Viewpoint(DEF='PersRight',description='Low Right',orientation=(0.74291,0.30772,0.59447,1.2171),position=(6.9282,-6.9282,6.9282)),
      Viewpoint(DEF='PersLeft',description='Low Left',orientation=(0.74291,-0.30772,-0.59447,1.2171),position=(-6.9282,-6.9282,6.9282)),
      Viewpoint(DEF='Back',description='Back view',orientation=(0.0,1.0,0.0,3.1416),position=(0.0,0.0,-12.0)),
      Transform(DEF='Close_travel',
        children=[
        PositionInterpolator(DEF='Close_Mover',key=[0.0,0.25,0.5,0.75,1.0],keyValue=[(0.0,2.5,0.0),(0.0,0.0,0.0),(0.0,-2.5,0.0),(0.0,0.0,0.0),(0.0,2.5,0.0)]),
        TimeSensor(DEF='Close_Time',cycleInterval=12.0,loop=True),
        Viewpoint(DEF='Close',description='Close Front',position=(0.0,0.0,6.0))]),
      DirectionalLight(direction=(1.0,-1.0,-1.0)),
      DirectionalLight(direction=(0.0,1.0,-0.5),intensity=0.5),
      Anchor(description='Back to front view',url=["#Front"],
        children=[
        Transform(translation=(0.0,0.0,-0.5),
          children=[
          Inline(url=["gridBack.x3d","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/gridBack.x3d","gridBack.wrl","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/gridBack.wrl"])])]),
      Viewpoint(DEF='View00',description='Sheen00',position=(-3.75,3.75,3.0)),
      Transform(translation=(-3.75,3.75,0.0),
        children=[
        Anchor(description='Sheen00 view',url=["#View00"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Sheen00')),
            geometry=Sphere(DEF='Ball',radius=0.5))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Sheen00',parameter=["target=_source"],url=["SheenPrototypes.html#ProtoDeclare_Sheen00","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SheenPrototypes.html#ProtoDeclare_Sheen00"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(DEF='TextMat',diffuseColor=(1.0,1.0,1.0))),
              geometry=Text(string=["Sheen00"],
                fontStyle=FontStyle(DEF='Style',family=["SANS"],justify=["MIDDLE","MIDDLE"],size=0.3,style_='BOLD')))])])]),
      Viewpoint(DEF='View01',description='Sheen01',position=(-2.25,3.75,3.0)),
      Transform(translation=(-2.25,3.75,0.0),
        children=[
        Anchor(description='Sheen01 view',url=["#View01"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Sheen01')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Sheen01',parameter=["target=_source"],url=["SheenPrototypes.html#ProtoDeclare_Sheen01","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SheenPrototypes.html#ProtoDeclare_Sheen01"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Sheen01"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View02',description='Sheen02',position=(-0.75,3.75,3.0)),
      Transform(translation=(-0.75,3.75,0.0),
        children=[
        Anchor(description='Sheen02 view',url=["#View02"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Sheen02')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Sheen02',parameter=["target=_source"],url=["SheenPrototypes.html#ProtoDeclare_Sheen02","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SheenPrototypes.html#ProtoDeclare_Sheen02"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Sheen02"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View03',description='Sheen03',position=(0.75,3.75,3.0)),
      Transform(translation=(0.75,3.75,0.0),
        children=[
        Anchor(description='Sheen03 view',url=["#View03"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Sheen03')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Sheen03',parameter=["target=_source"],url=["SheenPrototypes.html#ProtoDeclare_Sheen03","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SheenPrototypes.html#ProtoDeclare_Sheen03"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Sheen03"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View04',description='Sheen04',position=(2.25,3.75,3.0)),
      Transform(translation=(2.25,3.75,0.0),
        children=[
        Anchor(description='Sheen04 view',url=["#View04"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Sheen04')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Sheen04',parameter=["target=_source"],url=["SheenPrototypes.html#ProtoDeclare_Sheen04","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SheenPrototypes.html#ProtoDeclare_Sheen04"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Sheen04"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View05',description='Sheen05',position=(3.75,3.75,3.0)),
      Transform(translation=(3.75,3.75,0.0),
        children=[
        Anchor(description='Sheen05 view',url=["#View05"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Sheen05')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Sheen05',parameter=["target=_source"],url=["SheenPrototypes.html#ProtoDeclare_Sheen05","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SheenPrototypes.html#ProtoDeclare_Sheen05"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Sheen05"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View06',description='Sheen06',position=(-3.75,2.25,3.0)),
      Transform(translation=(-3.75,2.25,0.0),
        children=[
        Anchor(description='Sheen06 view',url=["#View06"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Sheen06')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Sheen06',parameter=["target=_source"],url=["SheenPrototypes.html#ProtoDeclare_Sheen06","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SheenPrototypes.html#ProtoDeclare_Sheen06"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Sheen06"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View07',description='Sheen07',position=(-2.25,2.25,3.0)),
      Transform(translation=(-2.25,2.25,0.0),
        children=[
        Anchor(description='Sheen07 view',url=["#View07"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Sheen07')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Sheen07',parameter=["target=_source"],url=["SheenPrototypes.html#ProtoDeclare_Sheen07","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SheenPrototypes.html#ProtoDeclare_Sheen07"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Sheen07"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View08',description='Sheen08',position=(-0.75,2.25,3.0)),
      Transform(translation=(-0.75,2.25,0.0),
        children=[
        Anchor(description='Sheen08 view',url=["#View08"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Sheen08')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Sheen08',parameter=["target=_source"],url=["SheenPrototypes.html#ProtoDeclare_Sheen08","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SheenPrototypes.html#ProtoDeclare_Sheen08"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Sheen08"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View09',description='Sheen09',position=(0.75,2.25,3.0)),
      Transform(translation=(0.75,2.25,0.0),
        children=[
        Anchor(description='Sheen09 view',url=["#View09"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Sheen09')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Sheen09',parameter=["target=_source"],url=["SheenPrototypes.html#ProtoDeclare_Sheen09","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SheenPrototypes.html#ProtoDeclare_Sheen09"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Sheen09"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View10',description='Sheen10',position=(2.25,2.25,3.0)),
      Transform(translation=(2.25,2.25,0.0),
        children=[
        Anchor(description='Sheen10 view',url=["#View10"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Sheen10')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Sheen10',parameter=["target=_source"],url=["SheenPrototypes.html#ProtoDeclare_Sheen10","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SheenPrototypes.html#ProtoDeclare_Sheen10"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Sheen10"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View11',description='Sheen11',position=(3.75,2.25,3.0)),
      Transform(translation=(3.75,2.25,0.0),
        children=[
        Anchor(description='Sheen11 view',url=["#View11"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Sheen11')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Sheen11',parameter=["target=_source"],url=["SheenPrototypes.html#ProtoDeclare_Sheen11","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SheenPrototypes.html#ProtoDeclare_Sheen11"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Sheen11"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View12',description='Sheen12',position=(-3.75,0.75,3.0)),
      Transform(translation=(-3.75,0.75,0.0),
        children=[
        Anchor(description='Sheen12 view',url=["#View12"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Sheen12')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Sheen12',parameter=["target=_source"],url=["SheenPrototypes.html#ProtoDeclare_Sheen12","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SheenPrototypes.html#ProtoDeclare_Sheen12"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Sheen12"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View13',description='Sheen13',position=(-2.25,0.75,3.0)),
      Transform(translation=(-2.25,0.75,0.0),
        children=[
        Anchor(description='Sheen13 view',url=["#View13"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Sheen13')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Sheen13',parameter=["target=_source"],url=["SheenPrototypes.html#ProtoDeclare_Sheen13","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SheenPrototypes.html#ProtoDeclare_Sheen13"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Sheen13"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View14',description='Sheen14',position=(-0.75,0.75,3.0)),
      Transform(translation=(-0.75,0.75,0.0),
        children=[
        Anchor(description='Sheen14 view',url=["#View14"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Sheen14')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Sheen14',parameter=["target=_source"],url=["SheenPrototypes.html#ProtoDeclare_Sheen14","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SheenPrototypes.html#ProtoDeclare_Sheen14"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Sheen14"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View15',description='Sheen15',position=(0.75,0.75,3.0)),
      Transform(translation=(0.75,0.75,0.0),
        children=[
        Anchor(description='Sheen15 view',url=["#View15"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Sheen15')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Sheen15',parameter=["target=_source"],url=["SheenPrototypes.html#ProtoDeclare_Sheen15","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SheenPrototypes.html#ProtoDeclare_Sheen15"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Sheen15"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View16',description='Sheen16',position=(2.25,0.75,3.0)),
      Transform(translation=(2.25,0.75,0.0),
        children=[
        Anchor(description='Sheen16 view',url=["#View16"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Sheen16')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Sheen16',parameter=["target=_source"],url=["SheenPrototypes.html#ProtoDeclare_Sheen16","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SheenPrototypes.html#ProtoDeclare_Sheen16"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Sheen16"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View17',description='Sheen17',position=(3.75,0.75,3.0)),
      Transform(translation=(3.75,0.75,0.0),
        children=[
        Anchor(description='Sheen17 view',url=["#View17"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Sheen17')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Sheen17',parameter=["target=_source"],url=["SheenPrototypes.html#ProtoDeclare_Sheen17","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SheenPrototypes.html#ProtoDeclare_Sheen17"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Sheen17"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View18',description='Sheen18',position=(-3.75,-0.75,3.0)),
      Transform(translation=(-3.75,-0.75,0.0),
        children=[
        Anchor(description='Sheen18 view',url=["#View18"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Sheen18')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Sheen18',parameter=["target=_source"],url=["SheenPrototypes.html#ProtoDeclare_Sheen18","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SheenPrototypes.html#ProtoDeclare_Sheen18"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Sheen18"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View19',description='Sheen19',position=(-2.25,-0.75,3.0)),
      Transform(translation=(-2.25,-0.75,0.0),
        children=[
        Anchor(description='Sheen19 view',url=["#View19"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Sheen19')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Sheen19',parameter=["target=_source"],url=["SheenPrototypes.html#ProtoDeclare_Sheen19","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SheenPrototypes.html#ProtoDeclare_Sheen19"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Sheen19"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View20',description='Sheen20',position=(-0.75,-0.75,3.0)),
      Transform(translation=(-0.75,-0.75,0.0),
        children=[
        Anchor(description='Sheen20 view',url=["#View20"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Sheen20')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Sheen20',parameter=["target=_source"],url=["SheenPrototypes.html#ProtoDeclare_Sheen20","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SheenPrototypes.html#ProtoDeclare_Sheen20"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Sheen20"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View21',description='Sheen21',position=(0.75,-0.75,3.0)),
      Transform(translation=(0.75,-0.75,0.0),
        children=[
        Anchor(description='Sheen21 view',url=["#View21"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Sheen21')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Sheen21',parameter=["target=_source"],url=["SheenPrototypes.html#ProtoDeclare_Sheen21","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SheenPrototypes.html#ProtoDeclare_Sheen21"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Sheen21"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View22',description='Sheen22',position=(2.25,-0.75,3.0)),
      Transform(translation=(2.25,-0.75,0.0),
        children=[
        Anchor(description='Sheen22 view',url=["#View22"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Sheen22')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Sheen22',parameter=["target=_source"],url=["SheenPrototypes.html#ProtoDeclare_Sheen22","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SheenPrototypes.html#ProtoDeclare_Sheen22"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Sheen22"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View23',description='Sheen23',position=(3.75,-0.75,3.0)),
      Transform(translation=(3.75,-0.75,0.0),
        children=[
        Anchor(description='Sheen23 view',url=["#View23"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Sheen23')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Sheen23',parameter=["target=_source"],url=["SheenPrototypes.html#ProtoDeclare_Sheen23","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SheenPrototypes.html#ProtoDeclare_Sheen23"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Sheen23"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View24',description='Sheen24',position=(-3.75,-2.25,3.0)),
      Transform(translation=(-3.75,-2.25,0.0),
        children=[
        Anchor(description='Sheen24 view',url=["#View24"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Sheen24')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Sheen24',parameter=["target=_source"],url=["SheenPrototypes.html#ProtoDeclare_Sheen24","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SheenPrototypes.html#ProtoDeclare_Sheen24"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Sheen24"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View25',description='Sheen25',position=(-2.25,-2.25,3.0)),
      Transform(translation=(-2.25,-2.25,0.0),
        children=[
        Anchor(description='Sheen25 view',url=["#View25"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Sheen25')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Sheen25',parameter=["target=_source"],url=["SheenPrototypes.html#ProtoDeclare_Sheen25","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SheenPrototypes.html#ProtoDeclare_Sheen25"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Sheen25"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View26',description='Sheen26',position=(-0.75,-2.25,3.0)),
      Transform(translation=(-0.75,-2.25,0.0),
        children=[
        Anchor(description='Sheen26 view',url=["#View26"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Sheen26')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Sheen26',parameter=["target=_source"],url=["SheenPrototypes.html#ProtoDeclare_Sheen26","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SheenPrototypes.html#ProtoDeclare_Sheen26"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Sheen26"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View27',description='Sheen27',position=(0.75,-2.25,3.0)),
      Transform(translation=(0.75,-2.25,0.0),
        children=[
        Anchor(description='Sheen27 view',url=["#View27"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Sheen27')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Sheen27',parameter=["target=_source"],url=["SheenPrototypes.html#ProtoDeclare_Sheen27","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SheenPrototypes.html#ProtoDeclare_Sheen27"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Sheen27"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View28',description='Sheen28',position=(2.25,-2.25,3.0)),
      Transform(translation=(2.25,-2.25,0.0),
        children=[
        Anchor(description='Sheen28 view',url=["#View28"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Sheen28')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Sheen28',parameter=["target=_source"],url=["SheenPrototypes.html#ProtoDeclare_Sheen28","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SheenPrototypes.html#ProtoDeclare_Sheen28"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Sheen28"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View29',description='Sheen29',position=(3.75,-2.25,3.0)),
      Transform(translation=(3.75,-2.25,0.0),
        children=[
        Anchor(description='Sheen29 view',url=["#View29"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Sheen29')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Sheen29',parameter=["target=_source"],url=["SheenPrototypes.html#ProtoDeclare_Sheen29","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SheenPrototypes.html#ProtoDeclare_Sheen29"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Sheen29"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View30',description='Sheen30',position=(-3.75,-3.75,3.0)),
      Transform(translation=(-3.75,-3.75,0.0),
        children=[
        Anchor(description='Sheen30 view',url=["#View30"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Sheen30')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Sheen30',parameter=["target=_source"],url=["SheenPrototypes.html#ProtoDeclare_Sheen30","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SheenPrototypes.html#ProtoDeclare_Sheen30"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Sheen30"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View31',description='Sheen31',position=(-2.25,-3.75,3.0)),
      Transform(translation=(-2.25,-3.75,0.0),
        children=[
        Anchor(description='Sheen31 view',url=["#View31"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Sheen31')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Sheen31',parameter=["target=_source"],url=["SheenPrototypes.html#ProtoDeclare_Sheen31","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SheenPrototypes.html#ProtoDeclare_Sheen31"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Sheen31"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View32',description='Sheen32',position=(-0.75,-3.75,3.0)),
      Transform(translation=(-0.75,-3.75,0.0),
        children=[
        Anchor(description='Sheen32 view',url=["#View32"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Sheen32')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Sheen32',parameter=["target=_source"],url=["SheenPrototypes.html#ProtoDeclare_Sheen32","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SheenPrototypes.html#ProtoDeclare_Sheen32"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Sheen32"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View33',description='Sheen33',position=(0.75,-3.75,3.0)),
      Transform(translation=(0.75,-3.75,0.0),
        children=[
        Anchor(description='Sheen33 view',url=["#View33"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Sheen33')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Sheen33',parameter=["target=_source"],url=["SheenPrototypes.html#ProtoDeclare_Sheen33","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SheenPrototypes.html#ProtoDeclare_Sheen33"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Sheen33"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View34',description='Sheen34',position=(2.25,-3.75,3.0)),
      Transform(translation=(2.25,-3.75,0.0),
        children=[
        Anchor(description='Sheen34 view',url=["#View34"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Sheen34')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Sheen34',parameter=["target=_source"],url=["SheenPrototypes.html#ProtoDeclare_Sheen34","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SheenPrototypes.html#ProtoDeclare_Sheen34"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Sheen34"],
                fontStyle=FontStyle(USE='Style')))])])])]),
    ROUTE(fromField='fraction_changed',fromNode='Close_Time',toField='set_fraction',toNode='Close_Mover'),
    ROUTE(fromField='value_changed',fromNode='Close_Mover',toField='set_translation',toNode='Close_travel')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for SheenExamples.py")
